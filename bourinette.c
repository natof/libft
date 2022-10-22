/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bourinette.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrallo <nrallo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:08:25 by nrallo            #+#    #+#             */
/*   Updated: 2022/10/20 15:00:17 by nrallo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "./header/libft.h"

void red () {
  printf("\033[1;31m");
}

void ok () {
  printf("\t\033[1;32mOK\n\033[0m");
}

int	test_atoi(void)
{
	char *test[] = {
		"  ",
		"56",
		"   98",
		"  5 8",
		" -58",
		"4758",
		" ---485",
		"t582",
		" t4580",
		"  +-45820",
		" -598-69adw3",
		"awda",
	};
	int i = -1;
	while (i++ != 11)
	{
		int a = atoi(test[i]);
		int b = ft_atoi(test[i]);
		if(a != b)
		{
			printf("Error test(%d):\ntest: %s\natoi: %d\nft_atoi: %d\n", i, test[i], a, b);
			return 0;
		}
		
	}
	printf("ft_atoi ➜ ");
	ok();
	return 1;
}

int test_bzero(void)
{
	char *test[] = {
		"Salut sava ?",
		"895Jaime les patates   ",
		"  daw dawd  dawd dawd",
	};
	int i = -1;
	while (i++ != 3)
	{
		char a[100] = "testdawdaw awdaw ";
		char b[100] = "testdawdaw awdaw ";
		bzero(a, 100);
		ft_bzero(b, 100);
		if(strcmp(a, b))
		{
			printf("Error test(%d):\ntest: %s\nbzero: %s\nft_bzero: %s\n", i, test[i], a, b);
			return 0;
		}
		
	}
	printf("ft_bzero ➜ ");
	ok();
	return 1;
}

int test_isalnum(void)
{
	char test[] = {
		'J',
		'1',
		' ',
		'8',
		'e',
		'*',
		'{',
	};
	int i = -1;
	while (i++ != 5)
	{
		int a = isalnum(test[i]);
		int b = ft_isalnum(test[i]);
		if(a != b)
		{
			printf("Error test(%d):\ntest: %c\nisalnum: %c\nft_isalnum: %c\n", i, test[i], a, b);
			return 0;
		}
		
	}
	printf("ft_isalnum ➜ ");
	ok();
	return 1;
}

int test_isalpha(void)
{
	char test[] = {
		'J',
		'1',
		' ',
		'8',
		'e',
		'*',
		'{',
	};
	int i = -1;
	while (i++ != 5)
	{
		int a = isalpha(test[i]);
		int b = ft_isalpha(test[i]);
		if(a != b)
		{
			printf("Error test(%d):\ntest: %c\nisalpha: %c\nft_isalpha: %c\n", i, test[i], a, b);
			return 0;
		}
		
	}
	printf("ft_isalpha ➜ ");
	ok();
	return 1;
}

int test_isnum(void)
{
	char test[] = {
		'J',
		'1',
		' ',
		'8',
		'e',
		'*',
		'{',
	};
	int i = -1;
	while (i++ != 5)
	{
		int a = isalpha(test[i]);
		int b = ft_isalpha(test[i]);
		if(a != b)
		{
			printf("Error test(%d):\ntest: %c\nisnum: %c\nft_isnum: %c\n", i, test[i], a, b);
			return 0;
		}
		
	}
	printf("ft_isnum ➜ ");
	ok();
	return 1;
}

int test_isascii(void)
{
	char test[] = {
		'J',
		'1',
		' ',
		'8',
		'e',
		'*',
		'{',
		'\n'
	};
	int i = -1;
	while (i++ != 11)
	{
		int a = isascii(test[i]);
		int b = ft_isascii(test[i]);
		if(a != b)
		{
			printf("Error test(%d):\ntest: %c\nisascii: %c\nft_isascii: %c\n", i, test[i], a, b);
			return 0;
		}
		
	}
	printf("ft_isascii ➜ ");
	ok();
	return 1;
}

int test_isdigit(void)
{
	char test[] = {
		'J',
		'1',
		' ',
		'8',
		'e',
		'*',
		'{',
		'\n'
	};
	int i = -1;
	while (i++ != 11)
	{
		int a = isdigit(test[i]);
		int b = ft_isdigit(test[i]);
		if(a != b)
		{
			printf("Error test(%d):\ntest: %c\nisdigit: %c\nft_isdigit: %c\n", i, test[i], a, b);
			return 0;
		}
		
	}
	printf("ft_isdigit ➜ ");
	ok();
	return 1;
}

int test_isprint(void)
{
	char test[] = {
		'J',
		'1',
		' ',
		'8',
		'e',
		'*',
		'{',
		'\n'
	};
	int i = -1;
	while (i++ != 11)
	{
		int a = isprint(test[i]);
		int b = ft_isprint(test[i]);
		if(a != b)
		{
			printf("Error test(%d):\ntest: %c\nisprint: %c\nft_isprint: %c\n", i, test[i], a, b);
			return 0;
		}
		
	}
	printf("ft_isprint ➜ ");
	ok();
	return 1;
}

int test_toupper(void)
{
	char test[] = {
		'A',
		'Z',
		' ',
		'e',
		'r',
		'z',
		'{',
		'\n'
	};
	int i = -1;
	while (i++ != 11)
	{
		int a = toupper(test[i]);
		int b = ft_toupper(test[i]);
		if(a != b)
		{
			printf("Error test(%d):\ntest: %c\ntouppper: %c\nft_toupper: %c\n", i, test[i], a, b);
			return 0;
		}
		
	}
	printf("ft_toupper ➜ ");
	ok();
	return 1;
}

int test_tolower(void)
{
	char test[] = {
		'A',
		'Z',
		' ',
		'e',
		'r',
		'z',
		'{',
		'\n'
	};
	int i = -1;
	while (i++ != 11)
	{
		int a = tolower(test[i]);
		int b = ft_tolower(test[i]);
		if(a != b)
		{
			printf("Error test(%d):\ntest: %c\ntolower: %c\nft_tolower: %c\n", i, test[i], a, b);
			return 0;
		}
		
	}
	printf("ft_tolower ➜ ");
	ok();
	return 1;
}

int test_memchr(void)
{
	char test[] = {
		'A',
		'Z',
		' ',
		'e',
		'r',
		'z',
		'{',
		'\n'
	};
	int i = -1;
	while (i++ != 11)
	{
		int a = tolower(test[i]);
		int b = ft_tolower(test[i]);
		if(a != b)
		{
			printf("Error test(%d):\ntest: %c\ntolower: %c\nft_tolower: %c\n", i, test[i], a, b);
			return 0;
		}
		
	}
	printf("ft_tolower ➜ ");
	ok();
	return 1;
}

int main()
{
	printf("\n");
	test_tolower();
	test_toupper();
	test_isprint();
	test_isdigit();
	test_isascii();
	test_isnum();
	test_isalpha();
	test_isalnum();
	test_bzero();
	test_atoi();
	printf("\n");
	return 0;
}

