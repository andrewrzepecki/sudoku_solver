/*||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\
  ||||||}
  -> File Name : ft_check_square.c
  ||||||}
  -> Creation Date : 07-09-2018
  ||||||}
  -> Last Modified : Fri Sep  7 13:02:40 2018
  ||||||}
  -> Created By : >>>  {drRz}  <<<                                                      ||||||}
  ||||||}
  /||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||*/

#include "sudoku_header.h"

int     ft_check_square(char **sudoku, int x, int y, char num)
{
    int c;
    int i;
    int t_i;
    int t_c;

    if (x < 3)
        c = 0;
    else if (x < 6)
        c = 3;
    else
        c = 6;

    if (y < 3)
        i = 0;
    else if (y < 6)
        i = 3;
    else
        i = 6;

    t_i = i;
    t_c = c;
    while (c < t_c + 3)
    {
        i = t_i;
        while (i < t_i + 3)
        {
            if (sudoku[c][i] == num && y != i && x != c)
                return (0);
            i++;
        }
        c++;
    }
    return (1);
}
