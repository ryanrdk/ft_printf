/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unbr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 12:24:47 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/25 14:54:13 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int		ft_unbr(va_list arg, t_atri bute)
{
	unsigned int	n;
	char			*s;

	bute.flag = '#';
	n = va_arg(arg, unsigned int);
	s = ft_utoa(n);
	bute.lnth += ft_putstr(s);
	ft_memdel(&s);
	return (bute.lnth);
}
