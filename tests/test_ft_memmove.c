#include "../includes/libft.h"

START_TEST(test_ft_memmove)
{
	char    src[] = "Hello World!";
        char    dst[20];
        char    s[] = "Hello";
        char    d[] = "World";
        char    b[20] = "1234567890";

	ck_assert_str_eq(ft_memmove(dst, src, 13), memmove(dst, src, 13));
	ck_assert_str_eq(ft_memmove(d, s, 0), memmove(d, s, 0));
	ck_assert_str_eq(ft_memmove(b + 2, b, 5), memmove(b + 2, b, 5));
	ck_assert_str_eq(ft_memmove(b, b + 2, 5), memmove(b, b + 2, 5));
}
END_TEST

Suite	*ft_memmove_suite(void)
{
	Suite	*s;
	TCase	*ft_memmove;

	s = suite_create("ft_memmove Suite");
	ft_memmove = tcase_create("ft_memmove");

	tcase_add_test(ft_memmove, test_ft_memmove);
	suite_add_tcase(s, ft_memmove);

	return (s);
}

int	run_test_ft_memmove(void)
{
	int	nf;
	Suite	*s;
	SRunner	*sr;

	s = ft_memmove_suite();
	sr = srunner_create(s);
	srunner_run_all(sr, CK_NORMAL);
	nf = srunner_ntests_failed(sr);
	srunner_free(sr);

	return (nf);
}
