#include "../includes/libft.h"

/* Define a test case for for ft_isalpha */
START_TEST(test_ft_isalpha)
{
        int     c;

        c = 0;
        while (c <= 127)
        {
                ck_assert_int_eq((ft_isalpha(c) != 0), (isalpha(c) != 0));
                c++;
        }
}
END_TEST

/* Define a test suite for ft_isalpha */
Suite *ft_isalpha_suite(void)
{
        Suite	*s;
	TCase	*ft_isalpha;

	s = suite_create("ft_isalpha Suite");
	ft_isalpha = tcase_create("ft_isalpha");
	tcase_add_test(ft_isalpha, test_ft_isalpha);
	suite_add_tcase(s, ft_isalpha);

        return (s);
}

int     run_test_ft_isalpha(void)
{
	int	number_failed;
	Suite	*s;
	SRunner	*sr;

	s = ft_isalpha_suite();
	sr = srunner_create(s);
	srunner_run_all(sr, CK_NORMAL);
	number_failed = srunner_ntests_failed(sr);
	srunner_free(sr);

	return (number_failed);
}
