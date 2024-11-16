#include "./includes/libft.h"

int     main(void)
{
        #ifdef RUN_TESTS
        printf("Running tests...\n");
        if (run_test_ft_isalpha() == 0)
                printf("All test passed\n");
	else 
		printf("Fail\n");
        #endif
        return (0);
}
