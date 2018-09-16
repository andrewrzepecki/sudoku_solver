/*||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\
                                                                                      ||||||}
-> File Name : ft_solve_sudoku.c
                                                                                      ||||||}
-> Creation Date : 07-09-2018
                                                                                      ||||||}
-> Last Modified : Fri Sep  7 12:17:10 2018
                                                                                      ||||||}
-> Created By : >>>  {drRz}  <<<                                                      ||||||}
                                                                                      ||||||}
/||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||*/

#include "sudoku_header.h"

int     ft_solve_sudoku(char **sudoku, int x, int y)
{
    int     t_x;
    int     t_y;
    char    num;

    num = '1';
    if (sudoku[x][y] == '0')
    {
        while (num <= '9')
        {
            t_x = x;
            t_y = y;
            if (ft_check_row(sudoku, x, y, num)  && ft_check_col(sudoku, x, y, num) 
                    && ft_check_square(sudoku, x, y, num))
            {

                sudoku[x][y] = num;
                if (x == 8 && y == 8)
                    return (1);
                else
                {
                    if (x == 8)
                    {
                        t_x = 0;
                        t_y++;
                    }
                    else
                        t_x++;
                    if (ft_solve_sudoku(sudoku, t_x, t_y))
                        return (1);
                }
            }
            num++;
        }
        sudoku[x][y] = '0';
        return (0);
    }
    else
    {
        if (x == 8 && y == 8)
            return (1);
        else
        {
            if (x == 8)
            {
                x = 0;  
                y++;
            }
            else
                x++;
            if (ft_solve_sudoku(sudoku, x, y))
                return (1);
            else
                return (0);
        }
    }
} 
