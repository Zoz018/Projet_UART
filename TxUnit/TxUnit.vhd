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
    end if;
  end process;

end behavorial;
