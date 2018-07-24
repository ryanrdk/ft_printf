/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 00:05:17 by jaleman           #+#    #+#             */
/*   Updated: 2018/07/24 17:37:02 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdint.h>
#include "../includes/ft_printf.h"

int	main(void)
{
	int	n;
	int count;

	n = 25;
	char kg[3] = "kg";
	count = 0;
	wchar_t wc[1024];
	wcscpy(wc, L"copy successful");
	ft_printf("%S\n", wc);
	printf("%ls\n", wc);
	ft_printf("Int: %D\nUnsigned: %U\n", 9223372036854775807, 9844674407370640);
	printf("Int: %ld\nUnsigned: %lu\n", 9223372036854775807, 9844674407370640);
	count = ft_printf("Nintendo+: %#O Linus-: %+d", 99999999999000, n);
	printf("\n%d\n", count);
	count = printf("Nintendo+: %#lo Linus-: %+d", 99999999999000, n);
	printf("\n%d\n", count);
	
	ft_printf("Memory 1: %p\n", &n);
	printf("Memory 2: %p\n", &n);

	ft_printf("%%\n");
	printf("%%\n");
	ft_printf("%%%\n", "test");
	printf("%%%", "test");	
	ft_printf("Yo Maamah weighs %d%s", n, kg);

	ft_printf("Hello %s", "World");
	return (0);
}
