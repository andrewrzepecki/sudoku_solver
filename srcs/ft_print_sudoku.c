/*||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\
                                                                                      ||||||}
-> File Name : ft_print_sudoku.c
                                                                                      ||||||}
-> Creation Date : 06-09-2018
                                                                                      ||||||}
-> Last Modified : Fri Sep  7 12:24:06 2018
                                                                                      ||||||}
-> Created By : >>>  {drRz}  <<<                                                      ||||||}
                                                                                      ||||||}
/||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||*/

#include "sudoku_header.h"

void    ft_print_sudoku(char **sudoku)
{
    int x;
    int y;

    x = 0;
    while (x < 9)
    {
        y = -1;
        while (++y < 9)
        {
            ft_putchar(sudoku[x][y]);
            if (y != 8)
                ft_putchar('|');
        }
        ft_putchar('\n');
        x++;
    }
}
