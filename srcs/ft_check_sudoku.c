/*||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\
                                                                                      ||||||}
-> File Name : ft_check_sudoku.c
                                                                                      ||||||}
-> Creation Date : 07-09-2018
                                                                                      ||||||}
-> Last Modified : Fri Sep  7 13:19:21 2018
                                                                                      ||||||}
-> Created By : >>>  {drRz}  <<<                                                      ||||||}
                                                                                      ||||||}
/||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||*/

#include "sudoku_header.h"

int     ft_check_sudoku(char **sudoku, int x, int y)
{
    while (y < 9)
    {
        x = 0;
        while (x < 9)
        {
            if (sudoku[x][y] != '0')
                if (ft_check_square(sudoku, x, y, sudoku[x][y]) == 0 ||
                        ft_check_row(sudoku, x, y, sudoku[x][y]) == 0 ||
                        ft_check_col(sudoku, x, y, sudoku[x][y]) == 0)
                    return (0);
            x++;
        }
        y++;
    }
    return (1);
}
