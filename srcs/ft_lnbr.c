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

int		ft_lnbr(va_list arg, t_atri butes)
{
	long	n;
	char	*s;
    int     len;

	butes.flag = '#';
	n = va_arg(arg, long);
	s = ft_ltoa(n);
	ft_putstr(s);
    len = ft_strlen(s);
    ft_memdel(&s);
	return (len);
}
