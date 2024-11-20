#include "../includes/libft.h"

START_TEST(test_ft_strlcpy)
{

}
END_TEST

Suite	*ft_strlcpy_suite(void)
{
	Suite	*s;
	TCase	*ft_strlcpy;

	s = suite_create("ft_strlcpy Suite");
	ft_strlcpy = tcase_create("ft_strlcpy");

	tcase_add_test(ft_strlcpy, test_ft_strlcpy);
	suite_add_tcase(s, ft_strlcpy);

	return (s);
}

int	run_test_ft_strlcpy(void)
{
	int	nf;
	Suite	*s;
	SRunner	*sr;

	s = ft_strlcpy_suite();
	sr = srunner_create(s);
	srunner_run_all(sr, CK_NORMAL);
	nf = srunner_ntests_failed(sr);
	srunner_free(sr);

	return (nf);
}
