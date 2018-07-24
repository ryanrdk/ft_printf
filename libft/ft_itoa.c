/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 18:40:57 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/24 15:53:32 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*s;
	int		i;
	int		neg;
	int		div;

	/*if (n == -2147483648)
		return (ft_strdup("-2147483648"));*/
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
