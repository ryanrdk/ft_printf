/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 12:15:24 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/16 16:44:47 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	itoh(int n)
{
	if (n >= 0 && n <= 9)
		return (48 + n);
	else if (n >= 10 && n <= 15)
	{
		n = n - 10;
		return (97 + n);
	}
	return (0);
}

char		*ft_htoa(unsigned long n)
{
	unsigned long	i;
	int				size;
	char			*p;

	i = n;
	size = 0;
	while (i > 16)
	{
		i = i / 16;
		size++;
	}
	if ((p = (char*)malloc(sizeof(char) * (size + 1))))
	{
		p[size + 1] = '\0';
		while (size >= 0)
		{
			i = n % 16;
			p[size] = itoh(i);
			n = n / 16;
			size--;
		}
	}
	return (p);
}
