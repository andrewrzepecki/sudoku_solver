/*||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\
                                                                                      ||||||}
-> File Name : main.c
                                                                                      ||||||}
-> Creation Date : 06-09-2018
                                                                                      ||||||}
-> Last Modified : Fri Sep  7 14:12:55 2018
                                                                                      ||||||}
-> Created By : >>>  {drRz}  <<<                                                      ||||||}
                                                                                      ||||||}
/||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||*/

#include "sudoku_header.h"

int     main(void)
{
    char **sudoku;

    sudoku = ft_init_sudoku();
    ft_putstr("Solving sudoku...\n\n");
    if (ft_check_sudoku(sudoku, 0, 0))
        ft_solve_sudoku(sudoku, 0, 0);
    else
        ft_putstr("Invalid Sudoku:\n");
    ft_print_sudoku(sudoku);
    ft_putchar('\n');
    return (0);
}
