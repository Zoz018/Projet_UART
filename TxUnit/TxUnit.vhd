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
  
  signal bufE_signal : std_logic;
  -- Parité
  signal parite : std_logic := '0';
  --etat
  type t_etat is (repos,init,debut,transmission,fin);
  signal etat : t_etat;

begin

  bufE <= bufE_signal;
  process(clk,reset)
  -- Compteur de bit pour savoir si on est dans le cas du bit de start, des 8 bits d'emission, du bit de parité ou du bit de stop 
  variable cpt_bit : integer;
  begin 
    if reset = '0' then
      cpt_bit := 8;
      txd <= '1';
      bufE_signal <= '1';
      etat <= repos;
      regE <= '1';
      parite <= '1';

    elsif rising_edge(clk) then 
        case etat is 

          when repos => 
            if ld = '1' then 
              etat <= init;          
            end if;

          when init => 
            registerT <= bufferT;
            regE <= '0';
            bufE_signal <= '1';
            etat <= debut;
            parite <= '1';

          when debut => 
            if enable = '1' then
              txd <= '0';
              cpt_bit := 8;
              etat <= transmission;
            end if;

          when transmission => 
            
            if enable = '1' and cpt_bit > 0 then
              cpt_bit := cpt_bit - 1;
              txd <= registerT(cpt_bit);
              parite <= parite xor registerT(cpt_bit);
            elsif enable = '1' and cpt_bit = 0 then
              txd <= parite;
              etat <= fin;
            end if;

          when fin => 

            if enable = '1' then
              txd <= '1';
              if bufE_signal = '0' then
                etat <= init;
              elsif bufE_signal = '1' then
                etat <= repos;
              end if;
            end if;
            regE <= '1';
      end case;

      if ld = '1' then
        bufferT <= data;
        bufE_signal <= '0';
      end if;
    end if;
  end process;
end behavorial;


 