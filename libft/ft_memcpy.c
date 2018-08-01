/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 18:29:25 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/06/07 12:21:49 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void					*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*vdst;
	const unsigned char *vsrc;

	vdst = dst;
	vsrc = src;
	i = 0;
	while (i < n)
	{
		vdst[i] = vsrc[i];
		i++;
	}
	return (dst);
}
