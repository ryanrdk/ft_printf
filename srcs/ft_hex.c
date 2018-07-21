/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 19:03:21 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/21 11:54:58 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int		ft_hex(va_list arg, char f)
{
	unsigned long	n;
	char			*s;
f++;
	n = va_arg(arg, unsigned long);
	s = ft_htoa(n);
	ft_putstr(s);
	return (ft_strlen(s));
}
