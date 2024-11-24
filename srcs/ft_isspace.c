#include <stdio.h>

/* Function returns if space, form-feed ('\f'), newline
 * ('\n'), carriage return ('\r'), horizontal tab ('\t'),
 *  and vertical tab ('\v').*/
int     ft_isspace(char c)
{
        if (c >= 9 && c <= 13 || c == 32)
                return (1);
        return (0);
}
/*
int	main(void)
{
	char test_chars[] = {' ', '\t', '\n', '\v', '\f', '\r', 'A', '1', '@', '\0'};
	size_t num_chars = sizeof(test_chars) / sizeof(test_chars[0]);
	size_t	i;

	i = 0;
	while (i < num_chars)
	{
		if (ft_isspace((unsigned char)test_chars[i]))
			printf("Character '%c' (ASCII %d) is a whitespace character.\n", 
					test_chars[i] == '\0' ? ' ' : test_chars[i], 
					test_chars[i]);
		else
			printf("Character '%c' (ASCII %d) is NOT a whitespace character.\n", 
					test_chars[i] == '\0' ? ' ' : test_chars[i], 
					test_chars[i]);
		i++;
	}
	return (0);
}*/
