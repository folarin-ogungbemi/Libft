#include "../includes/libft.h"

/* Define a test case for ft_isalnum */
START_TEST(test_ft_isalnum)
{
        int     c;

        c = 0;
        while (c <= 127)
        {
                ck_assert_int_eq((ft_isalnum(c) != 0), (isalnum(c) != 0));
                c++;
        }
}
END_TEST

/* Define a test suite for ft_isalpha */
Suite *ft_isalnum_suite(void)
{
        Suite *s = suite_create("ft_isalnum Suite");
        TCase *ft_isalnum = tcase_create("ft_isalnum");

        tcase_add_test(ft_isalnum, test_ft_isalnum);
        suite_add_tcase(s, ft_isalnum);

        return s;
}

int     run_test_ft_isalnum(void)
{                                                                                                             int     number_failed;
	Suite	*s; 
	SRunner	*sr;

	s = ft_isalnum_suite();
	sr = srunner_create(s);
	srunner_run_all(sr, CK_NORMAL);
	number_failed = srunner_ntests_failed(sr);
	srunner_free(sr);

	return (number_failed == 0) ? 0 : 1;
}
