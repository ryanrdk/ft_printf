/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_otoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 13:03:36 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/21 11:51:04 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_oltoa(unsigned long n)
{
	unsigned long long	i;
	int				size;
	char			*p;

	i = n;
	size = 0;
	while (i > 7)
	{
		i = i / 8;
		size++;
	}
	if (!(p = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	else
	{
		p[size + 1] = '\0';
		while (size >= 0)
		{
			i = n % 8;
			p[size] = 48 + i;
			n = n / 8;
			size--;
		}
	}
	return (p);
}