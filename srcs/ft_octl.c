/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_oct.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 18:59:31 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/24 14:34:17 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int		ft_octl(va_list arg, t_atri bute)
{
	unsigned long	n;
	char			*s;

	n = va_arg(arg, unsigned long);
	bute.lnth = 0;
	if (bute.flag)
		bute.lnth = ft_flags(bute.flag, 'O', (unsigned long)n);
	s = ft_oltoa(n);
	ft_putstr(s);
	bute.lnth += ft_strlen(s);
	ft_memdel(&s);
	return (bute.lnth);
}
