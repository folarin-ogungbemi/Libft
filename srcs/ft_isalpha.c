
#include <unistd.h>
#include <ctype.h>
#include <check.h>

/* Function checks for alphabetic character
 * in the standard C locale */
int	ft_isalpha(char c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

/* Define a test case for for ft_isalpha */
START_TEST(test_ft_isalpha)
{
	int	c;

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
	Suite *s = suite_create("ft_isalpha Suite");
	TCase *tc_core = tcase_create("Core");

	tcase_add_test(tc_core, test_ft_isalpha);
	suite_add_tcase(s, tc_core);

	return s;
}

int	main(void)
{
	int	number_failed;

	Suite *s = ft_isalpha_suite();
	SRunner *sr = srunner_create(s);

	srunner_run_all(sr, CK_NORMAL);
	number_failed = srunner_ntests_failed(sr);
	srunner_free(sr);

	return (number_failed == 0) ? 0 : 1;
}
