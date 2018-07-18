/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 18:40:57 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/18 12:52:06 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_llen(long long int n)
{
	int		len;

	len = 0;
	while (n /= 10)
		len++;
	return (len);
}

char		*ft_lutoa(unsigned long long int n)
{
	int		len;
	char	*str;

	len = ft_llen(n) + 2;
	if ((str = (char*)malloc(sizeof(char) * len)) == NULL)
		return (NULL);
	str[--len] = '\0';
	while (len--)
	{
		str[len] = n % 10 + '0';
		n = n / 10;
	}
	return (str);
}
