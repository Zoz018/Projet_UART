library IEEE;
use IEEE.std_logic_1164.all;

entity TxUnit is
  port (
    clk, reset : in std_logic;
    enable : in std_logic;
    ld : in std_logic;
    txd : out std_logic;
    regE : out std_logic;
    bufE : out std_logic;
    data : in std_logic_vector(7 downto 0));
end TxUnit;



architecture behavorial of TxUnit is
  -- Déclaration du tamppon et du registre d'emission
  signal bufferT, registerT : std_logic_vector(7 downto 0);
  -- Compteur de bit pour savoir si on est dans le cas du bit de start, des 8 bits d'emission, du bit de parité ou du bit de stop 
  signal cpt_bit : integer;
  signal bufE_signal : std_logic;
  -- Parité
  signal parite : std_logic;
  --etat
  type t_etat is (repos,init,debut,transmission,fin);
  signal etat : t_etat;

begin
  process(clk,reset)
  begin 
    if reset = '0' then
      cpt_bit <= 0;
      txd <= '1';
      bufE_signal <= '1';
      bufE <= bufE_signal;
      regE <= '1';
      etat <= repos;

    elsif rising_edge(clk) then 
        case etat is 

          when repos => 
            txd <= '1';
            if ld = '1' then 
              etat <= init;          
            end if;

          when init => 
            registerT <= bufferT;
            regE <= '0';
            bufE_signal <= '1';
            bufE <= bufE_signal;
            if enable = '1' then 
              etat <= debut;
            end if;

          when debut => 
            txd <= '0';
            cpt_bit <= 7 ; 
            if (ld = '1') and (bufE_signal='1') then 
              bufferT <= data;
              bufE_signal <= '0';
              bufE <= bufE_signal;
            end if;
            if (enable = '1') then 
              etat <= transmission;
            end if;
          
          when transmission => 
            txd <= registerT(cpt_bit);
            parite <= parite xor registerT(cpt_bit);
            if (ld = '1') and (bufE_signal='1') then 
              bufferT <= data;
              bufE_signal <= '0';
              bufE <= bufE_signal;
            end if;
            if (cpt_bit = 0) and (enable ='1') then 
              etat <= fin;
            elsif (cpt_bit > 0) and (enable = '1') then 
              cpt_bit <= cpt_bit - 1;
            end if;

          when fin => 
            txd <= parite;
            if (ld = '1') and (bufE_signal='1') then 
              bufferT <= data;
              bufE_signal <= '0';
              bufE <= bufE_signal;
            end if;
            if (enable = '1') and (bufE_signal = '0') then 
              etat <= init;
              txd <= '1';
            elsif (enable = '1') and (bufE_signal = '1') then
              etat <= repos;
              txd <= '1';
            end if;
        end case;
         
    end if;
  end process;
end behavorial;


 