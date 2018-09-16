/*||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\
                                                                                      ||||||}
-> File Name : ft_check_row.c
                                                                                      ||||||}
-> Creation Date : 07-09-2018
                                                                                      ||||||}
-> Last Modified : Fri Sep  7 01:29:17 2018
                                                                                      ||||||}
-> Created By : >>>  {drRz}  <<<                                                      ||||||}
                                                                                      ||||||}
/||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||*/

#include "sudoku_header.h"

int     ft_check_row(char **sudoku, int x, int y, char num)
{
    int c;

    c = 0;
    while (c < 9)
    {
        if (sudoku[c][y] == num && c != x)
            return (0);
        c++;
    }
    return (1);
}
