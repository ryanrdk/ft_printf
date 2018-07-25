/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 18:40:57 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/25 14:41:29 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_ltoa(long n)
{
	char	*s;
	int		i;
	int		neg;
	long	div;

	if (n == -9223372036854775807 - 1)
		return (ft_strdup("-9223372036854775808"));
	div = 1;
	neg = ft_neg(n);
	if (neg == 1)
		n *= -1;
	i = ft_len(n);
	s = (char*)malloc(sizeof(char) * (i + neg + 1));
	s[i + neg] = '\0';
	while (--i >= 0)
	{
		s[i + neg] = ((n / div) % 10) + '0';
		div *= 10;
	}
	if (neg)
		s[0] = '-';
	return (s);
}
