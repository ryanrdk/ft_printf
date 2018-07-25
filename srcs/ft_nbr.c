/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 12:18:46 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/24 17:10:44 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int		ft_nbr(va_list arg, t_atri bute)
{
	int		n;
	char	*s;

	n = va_arg(arg, int);
	bute.lnth = ft_flags(bute.flag, 'd', (long long)n);
	s = ft_itoa(n);
	bute.lnth += ft_putstr(s);
	ft_memdel(&s);
	return (bute.lnth);
}
