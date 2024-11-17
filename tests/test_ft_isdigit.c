#include "../includes/libft.h"

/* Define a test case for ft_isdigit */
START_TEST(test_ft_isdigit)
{
	int	c;

	c = 0;
	while (c <= 127)
	{
		ck_assert_int_eq((ft_isdigit(c) != 0), (isdigit(c) != 0));
		c++;
	}
}
END_TEST;

/* Define a test suite for ft_isdigit */
Suite	*ft_isdigit_suite(void)
{
	Suite	*s;
	TCase	*ft_isdigit;

	s = suite_create("ft_isdigit Suite");
	ft_isdigit = tcase_create("ft_isdigit");
	tcase_add_test(ft_isdigit, test_ft_isdigit);
	suite_add_tcase(s, ft_isdigit);

	return (s);
}

int	run_test_ft_isdigit(void)
{
	int	number_failed;

	Suite	*s;
	SRunner	*sr;

	s = ft_isdigit_suite();
	sr = srunner_create(s);
	srunner_run_all(sr, CK_NORMAL);
	number_failed = srunner_ntests_failed(sr);
	srunner_free(sr);

	return (number_failed);
}
