/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 19:03:21 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/21 13:28:53 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int		ft_alt_hex(va_list arg, char f)
{
	unsigned long	n;
	char			*s;
	int				len;

	n = va_arg(arg, unsigned long);
	len = 0;
	if (f)
		len = ft_flags(f, 'X', (long long)n);
	s = ft_htoa(n);
	ft_putstr(ft_toupper(s));
	len += ft_strlen(s);
	return (ft_strlen(s));
}
