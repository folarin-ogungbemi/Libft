#include "./includes/libft.h"

int     main(void)
{
        #ifdef RUN_TESTS
        printf("Running tests...\n");
        if (run_test_ft_isalpha() == 0)
                printf(SUCCESS "All test passed\n" RESET);
	else 
		printf(FAIL "Fail\n" RESET);

        if (run_test_ft_isalnum() == 0)
                printf(SUCCESS "All test passed\n" RESET);
	else 
		printf(FAIL "Fail\n" RESET);

        if (run_test_ft_isdigit() == 0)
                printf(SUCCESS "All test passed\n" RESET);
	else 
		printf(FAIL "Fail\n" RESET);

        if (run_test_ft_memmove() == 0)
                printf(SUCCESS "All test passed\n" RESET);
	else 
		printf(FAIL "Fail\n" RESET);

        if (run_test_ft_strlen() == 0)
                printf(SUCCESS "All test passed\n" RESET);
	else 
		printf(FAIL "Fail\n" RESET);

        if (run_test_ft_strlcpy() == 0)
                printf(SUCCESS "All test passed\n" RESET);
	else 
		printf(FAIL "Fail\n" RESET);
        #endif
        return (0);
}
