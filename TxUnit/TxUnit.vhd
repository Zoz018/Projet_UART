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
  --etat
  type t_etat is (repos,init,debut,transmission,fin);
  signal etat : t_etat;

  -- Fonction annexe qui permet de calculer le bit de parité avec comme argument un registre
  function parity_bit(registre : std_logic_vector(7 downto 0)) return std_logic is 
  variable result : std_logic := '0';
  begin
  for i in 0 to 7 loop
    result := result xor registre(i);
  end loop;
  return result;
  end function;

begin
  process(clk,reset)
  begin 
    if reset = '0' then
      cpt_bit <= 0;
      txd <= '1';
      bufE <= '1';
      regE <= '1';
      etat <= repos;

    elsif rising_edge(clk) then 
        case etat is 

          when repos => 
            if ld = '1' then 
              etat <= init;          
            end if;

          when init => 
            registreT <= bufferT;
            regE <= '0';
            bufE <= '1';
            if enable = '1' then 
              etat <= debut;
            end if;

          when debut => 
            txd <= '0';
            cpt_bit <= 7; 
            if (enable = '1') then 
              etat <= transmission;
            end if;
          
          when transmission then 
         
    end if;
  end process;
end behavorial;


 