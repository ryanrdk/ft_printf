/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 18:40:57 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/21 13:03:34 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_litoa(long long int n)
{
	size_t	i;
	size_t	n_size;
	char	*str;

	i = 0;
	/*if (n == -9223372036854775807)
		return (ft_strdup("-9223372036854775807"));*/
	n_size = ft_len(n);
	if (!(str = (char *)malloc(sizeof(char) * (n_size + 1))))
		return (NULL);
	str[n_size] = 0;
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
		i += 1;
	}
	while (i < n_size--)
	{
		str[n_size] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
