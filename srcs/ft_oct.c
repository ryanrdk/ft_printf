/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_oct.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 18:59:31 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/24 14:33:53 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int		ft_oct(va_list arg, t_atri bute)
{
	unsigned int	n;
	char			*s;

	n = va_arg(arg, unsigned int);
	bute.lnth = 0;
	if (bute.flag)
		bute.lnth = ft_flags(bute.flag, 'o', (long long)n);
	s = ft_otoa(n);
	bute.lnth += ft_putstr(s);
	ft_memdel(&s);
	return (bute.lnth);
}
