#ifndef SUDOKU_HEADER_H
# define SUDOKU_HEADER_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# define BUFF_SIZE 150

char    **ft_init_sudoku(void);

int     ft_str_is_numeric(char *str);

void    ft_line_call(int call);

void    ft_putnbr(int nbr);

void    ft_putstr(char *str);

void    ft_putchar(char c);

int     ft_strcmp(char *s1, char *s2);

int     ft_check_sudoku(char **sudoku, int x, int y);

int     ft_solve_sudoku(char **sudoku, int x, int y);

int     ft_check_row(char **sudoku, int x, int y, char num);

int     ft_check_col(char **sudoku, int x, int y, char num);

int     ft_check_square(char **sudoku, int x, int y, char num);

void    ft_print_sudoku(char **sudoku);

# endif
