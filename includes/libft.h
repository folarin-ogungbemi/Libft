#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h> // printf
# include <stddef.h> // func lib
# include <ctype.h> // func lib
# include <check.h> // Test lib

# define TEXT 				"\033[0;90m" // grey
# define WARNING			"\033[0;33m" // yellow
# define SUCCESS			"\033[0;32m" // green
# define FAIL				"\033[0;31m" // red
# define INFO				"\033[0;36m" // cyan
# define RESET 				"\033[0m" //reset

int	ft_isalpha(char c);
int	ft_isalnum(char c);
int	ft_isdigit(char c);
size_t	ft_strlen(const char *s);
void    *ft_memmove(void *dest, const void *src, size_t n);

/* Test files */
int run_test_ft_isalpha(void);
int run_test_ft_isalnum(void);
int run_test_ft_isdigit(void);
#endif
