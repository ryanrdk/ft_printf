/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lnbr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 12:24:47 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/24 14:32:57 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int		ft_lnbr(va_list arg, t_atri bute)
{
	long	n;
	char	*s;

	bute.flag = '#';
	n = va_arg(arg, long);
	s = ft_ltoa(n);
	bute.lnth += ft_putstr(s);
	ft_memdel(&s);
	return (bute.lnth);
}
