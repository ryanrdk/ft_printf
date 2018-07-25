/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 19:03:21 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/24 14:29:39 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int		ft_poi(va_list arg, t_atri bute)
{
	unsigned long	n;
	char			*s;

	n = va_arg(arg, unsigned long);
	bute.lnth = ft_flags(bute.flag, 'p', n);
	s = ft_htoa(n);
	ft_putstr("0x");
	bute.lnth += ft_putstr(s) + 2;
	ft_memdel(&s);
	return (bute.lnth);
}
