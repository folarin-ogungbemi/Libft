#include "../includes/libft.h"

START_TEST(test_ft_strlcat)
{
	char	dst[10];
	char	src[20];

	ck_assert_int_eq(ft_strlcat(dst, src, sizeof(dst)), strlcat(dst, src, sizeof(dst)));
}
END_TEST

Suite	*ft_strlcat_suite(void)
{
	Suite	*s;
	TCase	*ft_strcat;

	s = suite_create("ft_strlcat Suite");
	ft_strlcat = tcase_create("ft_strlcat");

	tcase_add_test(ft_strlcat, test_ft_strlcat);
	suite_add_tcase(s, ft_strlcat);

	return (s);
}

int	run_test_ft_strlcat(void)
{
	int	nf;
	Suite	*s;
	SRunner	*sr;

	s = ft_strlcat_suite();
	sr = srunner_create(s);
	srunner_run_all(sr, CK_NORMAL);
	nf = srunner_ntests_failed(sr);
	srunner_free(sr);

	return (nf);
}
