#include "../includes/libft.h"

START_TEST(test_ft_strlen)
{
	char	str[10] = "testing!";
	char	s[0];
	char	x[2];

	ck_assert_int_eq(ft_strlen(str), strlen(str));
	ck_assert_int_eq(ft_strlen(s), strlen(s));
	ck_assert_int_eq(ft_strlen(x), strlen(x));
}
END_TEST

Suite	*ft_strlen_suite(void)
{
	Suite	*s;
	TCase	*ft_strlen;

	s = suite_create("ft_strlen Suite");
	ft_strlen = tcase_create("ft_strlen");

	tcase_add_test(ft_strlen, test_ft_strlen);
	suite_add_tcase(s, ft_strlen);

	return (s);
}

int	run_test_ft_strlen(void)
{
	int	nf;
	Suite	*s;
	SRunner	*sr;

	s = ft_strlen_suite();
	sr = srunner_create(s);
	srunner_run_all(sr, CK_NORMAL);
	nf = srunner_ntests_failed(sr);
	srunner_free(sr);

	return (nf);
}

