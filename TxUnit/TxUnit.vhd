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

begin
  process(clk,reset)
  begin 
    if reset = '0' then
      cpt_bit <= 0;
      txd <= '1';
      bufE <= '1';
      regE <= '1';

    elsif rising_edge(clk) then 
      if enable = '1' then 
        case cpt_bit is 
          -- Bit de start
          when 0 => txd <= '0';
          -- Bits de données 
          when 1 to 8 => txd <= registerT(7 - (cpt_bit));
          -- Bit de parité calculé avec une fonction annexe
          when 9 => txd <= parity_bit(registerT);
          -- Bit de stop 
          when 10 => txd <= '1';
          when others => txd <= '1';
        end case; 
        if cpt_bit = 10 then
          -- On remet le compteur de bit à zéro 
          cpt_bit <= 0;
          -- Le registre d'émission n'est plus occupé
          regE <= '1';
        else
          -- Incrémentation du compteur de bit
          cpt_bit <= cpt_bit + 1;
        end if;
      end if;
    end if;
  end process;

  -- Fonction annexe qui permet de calculer le bit de parité avec comme argument un registre
  function 

end behavorial;
