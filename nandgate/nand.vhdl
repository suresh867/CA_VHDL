library ieee;
use ieee.std_logic_1164.all;

entity nand is
    port(
        a,b : in std_logic;
        c: out std_logic
    );
end nand;

architecture behaviour of nand is
    begin 
    c<= a nand b;

end behaviour;
