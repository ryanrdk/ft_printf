/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 19:03:21 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/24 14:40:34 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int		ft_hexu(va_list arg, t_atri bute)
{
	unsigned long	n;
	char			*s;

	n = va_arg(arg, unsigned long);
	if (bute.flag)
		bute.lnth = ft_flags(bute.flag, 'X', (long long)n);
	s = ft_htoa(n);
	bute.lnth += ft_putstr(ft_toupper(s));
	ft_memdel(&s);
	return (bute.lnth);
}
