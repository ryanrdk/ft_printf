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

int		ft_octl(va_list arg, t_atri butes)
{
	unsigned long	n;
	char			*s;
	int				len;

	n = va_arg(arg, unsigned long);
	len = 0;
	if (butes.flag)
		len = ft_flags(butes.flag, 'O', (unsigned long)n);
	s = ft_oltoa(n);
	ft_putstr(s);
	len += ft_strlen(s);
    ft_memdel(&s);
    return (len);
}
