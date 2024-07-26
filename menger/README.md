# directory Menger by A.OTMANI
## Write a function that draws a 2D Menger Sponge
1) Prototype: void menger(int level);
2) Where level is the level of the Menger Sponge to draw
3) If level is lower than 0, your function must do nothing
4) You’re allowed to use the math library. Your program will be compiled using the ld flag -lm

Format:
1) Here, we will only draw a 2D version of the Menger sponge, but the principle is the same
2) A level N sponge is a 3x3 square of level N-1 sponges, except for the center one, which is left empty
3) A level 0 sponge is represented by the # character
4) Examples:
        - A level 0 sponge is a simple 1x1 square
        - A level 1 sponge is a 3x3 square of level 0 sponges, except for the center one, which is left empty
        - A level 2 sponge is a 3x3 square of level 1 sponges, except for the center one, which is left empty
5) TIP: The size of a level N Menger sponge is calculated as follows: 3^N
