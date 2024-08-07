# chca
CHCA simple cellular automaton program

I made this years ago as a simple experiment on 1-D cellular automata,

then I got ambitious and wanted to add more dimensions, but somehow

forgot about the project for years.

I would still like to do more with it at some point.

Right now this is very simple -- it makes a simple "Wolfram style" 1D CA
with Wolfram's numbering system.

Usage example:

chca 110

Output example:

```
00000000000000000000000000000000000000001000000000000000000000000000000000000000
00000000000000000000000000000000000000011000000000000000000000000000000000000000
00000000000000000000000000000000000000111000000000000000000000000000000000000000
00000000000000000000000000000000000001101000000000000000000000000000000000000000
00000000000000000000000000000000000011111000000000000000000000000000000000000000
00000000000000000000000000000000000110001000000000000000000000000000000000000000
00000000000000000000000000000000001110011000000000000000000000000000000000000000
00000000000000000000000000000000011010111000000000000000000000000000000000000000
00000000000000000000000000000000111111101000000000000000000000000000000000000000
00000000000000000000000000000001100000111000000000000000000000000000000000000000
00000000000000000000000000000011100001101000000000000000000000000000000000000000
00000000000000000000000000000110100011111000000000000000000000000000000000000000
00000000000000000000000000001111100110001000000000000000000000000000000000000000
00000000000000000000000000011000101110011000000000000000000000000000000000000000
00000000000000000000000000111001111010111000000000000000000000000000000000000000
00000000000000000000000001101011001111101000000000000000000000000000000000000000
00000000000000000000000011111111011000111000000000000000000000000000000000000000
00000000000000000000000110000001111001101000000000000000000000000000000000000000
00000000000000000000001110000011001011111000000000000000000000000000000000000000
00000000000000000000011010000111011110001000000000000000000000000000000000000000
00000000000000000000111110001101110010011000000000000000000000000000000000000000
00000000000000000001100010011111010110111000000000000000000000000000000000000000
00000000000000000011100110110001111111101000000000000000000000000000000000000000
00000000000000000110101111110011000000111000000000000000000000000000000000000000
00000000000000001111111000010111000001101000000000000000000000000000000000000000
00000000000000011000001000111101000011111000000000000000000000000000000000000000
00000000000000111000011001100111000110001000000000000000000000000000000000000000
00000000000001101000111011101101001110011000000000000000000000000000000000000000
00000000000011111001101110111111011010111000000000000000000000000000000000000000
00000000000110001011111011100001111111101000000000000000000000000000000000000000
00000000001110011110001110100011000000111000000000000000000000000000000000000000
00000000011010110010011011100111000001101000000000000000000000000000000000000000
00000000111111110110111110101101000011111000000000000000000000000000000000000000
00000001100000011111100011111111000110001000000000000000000000000000000000000000
00000011100000110000100110000001001110011000000000000000000000000000000000000000
00000110100001110001101110000011011010111000000000000000000000000000000000000000
00001111100011010011111010000111111111101000000000000000000000000000000000000000
00011000100111110110001110001100000000111000000000000000000000000000000000000000
00111001101100011110011010011100000001101000000000000000000000000000000000000000
01101011111100110010111110110100000011111000000000000000000000000000000000000000
11111110000101110111100011111100000110001000000000000000000000000000000000000000
10000010001111011100100110000100001110011000000000000000000000000000000000000001
10000110011001110101101110001100011010111000000000000000000000000000000000000011
10001110111011011111111010011100111111101000000000000000000000000000000000000110
10011011101111110000001110110101100000111000000000000000000000000000000000001111
10111110111000010000011011111111100001101000000000000000000000000000000000011000
11100011101000110000111110000000100011111000000000000000000000000000000000111001
00100110111001110001100010000001100110001000000000000000000000000000000001101011
01101111101011010011100110000011101110011000000000000000000000000000000011111111
11111000111111110110101110000110111010111000000000000000000000000000000110000001
00001001100000011111111010001111101111101000000000000000000000000000001110000011
00011011100000110000001110011000111000111000000000000000000000000000011010000111
00111110100001110000011010111001101001101000000000000000000000000000111110001101
01100011100011010000111111101011111011111000000000000000000000000001100010011111
11100110100111110001100000111110001110001000000000000000000000000011100110110001
00101111101100010011100001100010011010011000000000000000000000000110101111110011
01111000111100110110100011100110111110111000000000000000000000001111111000010111
11001001100101111111100110101111100011101000000000000000000000011000001000111101
01011011101111000000101111111000100110111000000000000000000000111000011001100111
11111110111001000001111000001001101111101000000000000000000001101000111011101101
00000011101011000011001000011011111000111000000000000000000011111001101110111111
00000110111111000111011000111110001001101000000000000000000110001011111011100001
00001111100001001101111001100010011011111000000000000000001110011110001110100011
00011000100011011111001011100110111110001000000000000000011010110010011011100111
00111001100111110001011110101111100010011000000000000000111111110110111110101101
01101011101100010011110011111000100110111000000000000001100000011111100011111111
11111110111100110110010110001001101111101000000000000011100000110000100110000001
00000011100101111110111110011011111000111000000000000110100001110001101110000011
00000110101111000011100010111110001001101000000000001111100011010011111010000111
00001111111001000110100111100010011011111000000000011000100111110110001110001101
00011000001011001111101100100110111110001000000000111001101100011110011010011111
00111000011111011000111101101111100010011000000001101011111100110010111110110001
01101000110001111001100111111000100110111000000011111110000101110111100011110011
11111001110011001011101100001001101111101000000110000010001111011100100110010111
00001011010111011110111100011011111000111000001110000110011001110101101110111100
00011111111101110011100100111110001001101000011010001110111011011111111011100100
00110000000111010110101101100010011011111000111110011011101111110000001110101100
01110000001101111111111111100110111110001001100010111110111000010000011011111100
11010000011111000000000000101111100010011011100111100011101000110000111110000100
11110000110001000000000001111000100110111110101100100110111001110001100010001101
00010001110011000000000011001001101111100011111101101111101011010011100110011111
00110011010111000000000111011011111000100110000111111000111111110110101110110001
01110111111101000000001101111110001001101110001100001001100000011111111011110011
11011100000111000000011111000010011011111010011100011011100000110000001110010111
01110100001101000000110001000110111110001110110100111110100001110000011010111100
11011100011111000001110011001111100010011011111101100011100011010000111111100100
11110100110001000011010111011000100110111110000111100110100111110001100000101101
00011101110011000111111101111001101111100010001100101111101100010011100001111111
00110111010111001100000111001011111000100110011101111000111100110110100011000001
01111101111101011100001101011110001001101110110111001001100101111111100111000011
11000111000111110100011111110010011011111011111101011011101111000000101101000111
01001101001100011100110000010110111110001110000111111110111001000001111111001100
11011111011100110101110000111111100010011010001100000011101011000011000001011100
11110001110101111111010001100000100110111110011100000110111111000111000011110101
00010011011111000001110011100001101111100010110100001111100001001101000110011111
00110111110001000011010110100011111000100111111100011000100011011111001110110001
01111100010011000111111111100110001001101100000100111001100111110001011011110011
11000100110111001100000000101110011011111100001101101011101100010011111110010111
01001101111101011100000001111010111110000100011111111110111100110110000010111100
11011111000111110100000011001111100010001100110000000011100101111110000111100100
11110001001100011100000111011000100110011101110000000110101111000010001100101101
00010011011100110100001101111001101110110111010000001111111001000110011101111111
00110111110101111100011111001011111011111101110000011000001011001110110111000001
01111100011111000100110001011110001110000111010000111000011111011011111101000011
11000100110001001101110011110010011010001101110001101000110001111110000111000111
01001101110011011111010110010110111110011111010011111001110011000010001101001100
11011111010111110001111110111111100010110001110110001011010111000110011111011100
11110001111100010011000011100000100111110011011110011111111101001110110001110101
00010011000100110111000110100001101100010111110010110000000111011011110011011111
00110111001101111101001111100011111100111100010111110000001101111110010111110001
01111101011111000111011000100110000101100100111100010000011111000010111100010011
11000111110001001101111001101110001111101101100100110000110001000111100100110111
01001100010011011111001011111010011000111111101101110001110011001100101101111100
11011100110111110001011110001110111001100000111111010011010111011101111111000100
11110101111100010011110010011011101011100001100001110111111101110111000001001101
00011111000100110110010110111110111110100011100011011100000111011101000011011111
00110001001101111110111111100011100011100110100111110100001101110111000111110001
01110011011111000011100000100110100110101111101100011100011111011101001100010011
11010111110001000110100001101111101111111000111100110100110001110111011100110111
01111100010011001111100011111000111000001001100101111101110011011101110101111100
11000100110111011000100110001001101000011011101111000111010111110111011111000100
11001101111101111001101110011011111000111110111001001101111100011101110001001101
01011111000111001011111010111110001001100011101011011111000100110111010011011111
11110001001101011110001111100010011011100110111111110001001101111101110111110001
00010011011111110010011000100110111110101111100000010011011111000111011100010011
00110111110000010110111001101111100011111000100000110111110001001101110100110111
01111100010000111111101011111000100110001001100001111100010011011111011101111101
11000100110001100000111110001001101110011011100011000100110111110001110111000111
01001101110011100001100010011011111010111110100111001101111100010011011101001100
11011111010110100011100110111110001111100011101101011111000100110111110111011100
11110001111111100110101111100010011000100110111111110001001101111100011101110101
00010011000000101111111000100110111001101111100000010011011111000100110111011111
00110111000001111000001001101111101011111000100000110111110001001101111101110001
01111101000011001000011011111000111110001001100001111100010011011111000111010011
11000111000111011000111110001001100010011011100011000100110111110001001101110111
01001101001101111001100010011011100110111110100111001101111100010011011111011100
11011111011111001011100110111110101111100011101101011111000100110111110001110100
11110001110001011110101111100011111000100110111111110001001101111100010011011101
00010011010011110011111000100110001001101111100000010011011111000100110111110111
00110111110110010110001001101110011011111000100000110111110001001101111100011101
01111100011110111110011011111010111110001001100001111100010011011111000100110111
11000100110011100010111110001111100010011011100011000100110111110001001101111101
01001101110110100111100010011000100110111110100111001101111100010011011111000111
11011111011111101100100110111001101111100011101101011111000100110111110001001101
01110001110000111101101111101011111000100110111111110001001101111100010011011111
11010011010001100111111000111110001001101111100000010011011111000100110111110001
01110111110011101100001001100010011011111000100000110111110001001101111100010011
11011100010110111100011011100110111110001001100001111100010011011111000100110111
01110100111111100100111110101111100010011011100011000100110111110001001101111100
11011101100000101101100011111000100110111110100111001101111100010011011111000100
11110111100001111111100110001001101111100011101101011111000100110111110001001101
00011100100011000000101110011011111000100110111111110001001101111100010011011111
00110101100111000001111010111110001001101111100000010011011111000100110111110001
01111111101101000011001111100010011011111000100000110111110001001101111100010011
11000000111111000111011000100110111110001001100001111100010011011111000100110111
01000001100001001101111001101111100010011011100011000100110111110001001101111100
11000011100011011111001011111000100110111110100111001101111100010011011111000100
11000110100111110001011110001001101111100011101101011111000100110111110001001101
01001111101100010011110010011011111000100110111111110001001101111100010011011111
11011000111100110110010110111110001001101111100000010011011111000100110111110001
01111001100101111110111111100010011011111000100000110111110001001101111100010011
11001011101111000011100000100110111110001001100001111100010011011111000100110111
01011110111001000110100001101111100010011011100011000100110111110001001101111100
11110011101011001111100011111000100110111110100111001101111100010011011111000100
10010110111111011000100110001001101111100011101101011111000100110111110001001101
10111111100001111001101110011011111000100110111111110001001101111100010011011111
11100000100011001011111010111110001001101111100000010011011111000100110111110000
10100001100111011110001111100010011011111000100000110111110001001101111100010001
11100011101101110010011000100110111110001001100001111100010011011111000100110011
00100110111111010110111001101111100010011011100011000100110111110001001101110110
01101111100001111111101011111000100110111110100111001101111100010011011111011110
11111000100011000000111110001001101111100011101101011111000100110111110001110010
10001001100111000001100010011011111000100110111111110001001101111100010011010111
10011011101101000011100110111110001001101111100000010011011111000100110111111100
10111110111111000110101111100010011011111000100000110111110001001101111100000101
11100011100001001111111000100110111110001001100001111100010011011111000100001111
00100110100011011000001001101111100010011011100011000100110111110001001100011000
01101111100111111000011011111000100110111110100111001101111100010011011100111000
11111000101100001000111110001001101111100011101101011111000100110111110101101000
10001001111100011001100010011011111000100110111111110001001101111100011111111001
10011011000100111011100110111110001001101111100000010011011111000100110000001011
10111111001101101110101111100010011011111000100000110111110001001101110000011110
11100001011111111011111000100110111110001001100001111100010011011111010000110011
00100011110000001110001001101111100010011011100011000100110111110001110001110110
01100110010000011010011011111000100110111110100111001101111100010011010011011110
11101110110000111110111110001001101111100011101101011111000100110111110111110010
10111011110001100011100010011011111000100110111111110001001101111100011100010111
11101110010011100110100110111110001001101111100000010011011111000100110100111100
10111010110110101111101111100010011011111000100000110111110001001101111101100101
11101111111111111000111000100110111110001001100001111100010011011111000111101111
00111000000000001001101001101111100010011011100011000100110111110001001100111000
01101000000000011011111011111000100110111110100111001101111100010011011101101000
11111000000000111110001110001001101111100011101101011111000100110111110111111000
10001000000001100010011010011011111000100110111111110001001101111100011100001001
10011000000011100110111110111110001001101111100000010011011111000100110100011011
10111000000110101111100011100010011011111000100000110111110001001101111100111110
11101000001111111000100110100110111110001001100001111100010011011111000101100011
00111000011000001001101111101111100010011011100011000100110111110001001111100110
01101000111000011011111000111000100110111110100111001101111100010011011000101110
11111001101000111110001001101001101111100011101101011111000100110111111001111010
10001011111001100010011011111011111000100110111111110001001101111100001011001111
10011110001011100110111110001110001001101111100000010011011111000100011111011000
10110010011110101111100010011010011011111000100000110111110001001100110001111001
11110110110011111000100110111110111110001001100001111100010011011101110011001011
00011111110110001001101111100011100010011011100011000100110111110111010111011110
00110000011110011011111000100110100110111110100111001101111100011101111101110010
01110000110010111110001001101111101111100011101101011111000100110111000111010110
11010001110111100010011011111000111000100110111111110001001101111101001101111110
11110011011100100110111110001001101001101111100000010011011111000111011111000011
00010111110101101111100010011011111011111000100000110111110001001101110001000110
00111100011111111000100110111110001110001001100001111100010011011111010011001110
01100100110000001001101111100010011010011011100011000100110111110001110111011010
11101101110000011011111000100110111110111110100111001101111100010011011101111110
10111111010000111110001001101111100011100011101101011111000100110111110111000011
11100001110001100010011011111000100110100110111111110001001101111100011101000110
10100011010011100110111110001001101111101111100000010011011111000100110111001111
11100111110110101111100010011011111000111000100000110111110001001101111101011000
10101100011111111000100110111110001001101001100001111100010011011111000111111001
11111100110000001001101111100010011011111011100011000100110111110001001100001011
00000101110000011011111000100110111110001110100111001101111100010011011100011110
00001111010000111110001001101111100010011011101101011111000100110111110100110010
00011001110001100010011011111000100110111110111111110001001101111100011101110110
00111011010011100110111110001001101111100011100000010011011111000100110111011110
01101111110110101111100010011011111000100110100000110111110001001101111101110010
11111000011111111000100110111110001001101111100001111100010011011111000111010110
10001000110000001001101111100010011011111000100011000100110111110001001101111111
10011001110000011011111000100110111110001001100111001101111100010011011111000000
10111011010000111110001001101111100010011011101101011111000100110111110001000001
11101111110001100010011011111000100110111110111111110001001101111100010011000011
00111000010011100110111110001001101111100011100000010011011111000100110111000110
01101000110110101111100010011011111000100110100000110111110001001101111101001110
11111001111111111000100110111110001001101111100001111100010011011111000111011010
10001011000000001001101111100010011011111000100011000100110111110001001101111111
10011111000000011011111000100110111110001001100111001101111100010011011111000000
10110001000000111110001001101111100010011011101101011111000100110111110001000001
11110011000001100010011011111000100110111110111111110001001101111100010011000011
00010111000011100110111110001001101111100011100000010011011111000100110111000110
00111101000110101111100010011011111000100110100000110111110001001101111101001110
01100111001111111000100110111110001001101111100001111100010011011111000111011010
11101101011000001001101111100010011011111000100011000100110111110001001101111110
10111111111000011011111000100110111110001001100111001101111100010011011111000011
11100000001000111110001001101111100010011011101101011111000100110111110001000110
10100000011001100010011011111000100110111110111111110001001101111100010011001111
11100000111011100110111110001001101111100011100000010011011111000100110111011000
10100001101110101111100010011011111000100110100000110111110001001101111101111001
11100011111011111000100110111110001001101111100001111100010011011111000111001011
00100110001110001001101111100010011011111000100011000100110111110001001101011110
01101110011010011011111000100110111110001001100111001101111100010011011111110010
11111010111110111110001001101111100010011011101101011111000100110111110000010110
10001111100011100010011011111000100110111110111111110001001101111100010000111111
10011000100110100110111110001001101111100011100000010011011111000100110001100000
10111001101111101111100010011011111000100110100000110111110001001101110011100001
11101011111000111000100110111110001001101111100001111100010011011111010110100011
00111110001001101001101111100010011011111000100011000100110111110001111111100110
01100010011011111011111000100110111110001001100111001101111100010011000000101110
11100110111110001110001001101111100010011011101101011111000100110111000001111010
10101111100010011010011011111000100110111110111111110001001101111101000011001111
```

