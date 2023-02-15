/*
** EPITECH PROJECT, 2022
** unit_tests
** File description:
** test the program
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdint.h>
#include <stddef.h>
#include "../include/my.h"
#include "../include/print.h"

char    *str = "astek";

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, str0, .init = redirect_all_std)
{
    my_printf("hello world");
    cr_assert_stdout_eq_str("hello world");
}

Test(my_printf, str1, .init = redirect_all_std)
{
    my_printf("hello Sofia im %%s\n", "Mario");
    cr_assert_stdout_eq_str("hello Sofia im %s\n");
}

Test(my_printf, str2, .init = redirect_all_std)
{
    my_printf("hello Sofia im %%%s%%\n", "Mario");
    cr_assert_stdout_eq_str("hello Sofia im %Mario%\n");
}

Test(my_printf, str3, .init = redirect_all_std)
{
    my_printf("hello Sofia im %s\n", "Mario");
    cr_assert_stdout_eq_str("hello Sofia im Mario\n");
}

Test(my_printf, str4, .init = redirect_all_std)
{
    my_printf("hello Sofia im %s\n", "2131");
    cr_assert_stdout_eq_str("hello Sofia im 2131\n");
}

Test(my_printf, str5, .init = redirect_all_std)
{
    my_printf("hello Sofia im %s\n", "%");
    cr_assert_stdout_eq_str("hello Sofia im %\n");
}

Test(my_printf, str6, .init = redirect_all_std)
{
    my_printf("hello Sofia im %s\n", "%%");
    cr_assert_stdout_eq_str("hello Sofia im %%\n");
}

Test(my_printf, str7, .init = redirect_all_std)
{
    my_printf("hello Sofia im %i\n", 0123);
    cr_assert_stdout_eq_str("hello Sofia im 83\n");
}

Test(my_printf, str8, .init = redirect_all_std)
{
    my_printf("hello Sofia im %c\n", 0123);
    cr_assert_stdout_eq_str("hello Sofia im S\n");
}

Test(my_printf, str9, .init = redirect_all_std)
{
    my_printf("hello Sofia im %c\n", 23421);
    cr_assert_stdout_eq_str("hello Sofia im }\n");
}

Test(my_printf, str10, .init = redirect_all_std)
{
    my_printf("hello Sofia im %e\n", -1.1);
    cr_assert_stdout_eq_str("hello Sofia im -1.100000e+00\n");
}

Test(my_printf, str11, .init = redirect_all_std)
{
    my_printf("hello Sofia im %E\n", -1.1);
    cr_assert_stdout_eq_str("hello Sofia im -1.100000E+00\n");
}

Test(my_printf, str12, .init = redirect_all_std)
{
    my_printf("hello Sofia im %c\n", '1');
    cr_assert_stdout_eq_str("hello Sofia im 1\n");
}

Test(my_printf, str13, .init = redirect_all_std)
{
    my_printf("hello Sofia im %%\n", "123");
    cr_assert_stdout_eq_str("hello Sofia im %\n");
}

Test(my_printf, str14, .init = redirect_all_std)
{
    my_printf("hello Sofia im %f\n", 0.123);
    cr_assert_stdout_eq_str("hello Sofia im 0.123000\n");
}

Test(my_printf, str15, .init = redirect_all_std)
{
    my_printf("hello Sofia im %f\n", 0.0123);
    cr_assert_stdout_eq_str("hello Sofia im 0.012300\n");
}

Test(my_printf, str16, .init = redirect_all_std)
{
    my_printf("hello Sofia im %f\n", 00.0123);
    cr_assert_stdout_eq_str("hello Sofia im 0.012300\n");
}

Test(my_printf, str17, .init = redirect_all_std)
{
    my_printf("hello Sofia im %F\n", 0.123);
    cr_assert_stdout_eq_str("hello Sofia im 0.123000\n");
}

Test(my_printf, str18, .init = redirect_all_std)
{
    my_printf("hello Sofia im %F\n", 0.0123);
    cr_assert_stdout_eq_str("hello Sofia im 0.012300\n");
}

Test(my_printf, str19, .init = redirect_all_std)
{
    my_printf("hello Sofia im %F\n", 00.0123);
    cr_assert_stdout_eq_str("hello Sofia im 0.012300\n");
}

Test(my_printf, str20, .init = redirect_all_std)
{
    my_printf("Hello Mario im %x\n", 123456);
    cr_assert_stdout_eq_str("Hello Mario im 1e240");
}

Test(my_printf, str21, .init = redirect_all_std)
{
    my_printf("Hello Mario im %X\n", 123456);
    cr_assert_stdout_eq_str("Hello Mario im 1E240");
}


