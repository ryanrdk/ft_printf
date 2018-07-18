/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 13:45:11 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/06/07 17:11:35 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dst, char const *src, size_t n)
{
	size_t	i;
	size_t	size;

	i = 0;
	while (dst[i])
		i++;
	size = i;
	while (src[i - size] && i - size < n)
	{
		dst[i] = src[i - size];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
