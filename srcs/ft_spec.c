/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spec.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 17:15:47 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/25 14:55:33 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int			ft_spec(t_atri *bute, va_list arg)
{
	int	len;

	len = 0;
	if (bute->spec == '%')
		len = ft_lit(bute, '%');
	else if (bute->spec == 's' || bute->spec == 'S')
		len = ft_str(bute, va_arg(arg, void *));
	else if (bute->spec == 'p')
		len = ft_poi(bute, va_arg(arg, void *));
	else if (bute->spec == 'd' || bute->spec == 'D' || bute->spec == 'i')
		len = ft_nbr(bute, va_arg(arg, void *));
	else if (bute->spec == 'o' || bute->spec == 'O')
		len = ft_oct(bute, va_arg(arg, void *));
	else if (bute->spec == 'u' || bute->spec == 'U')
		len = ft_unb(bute, va_arg(arg, void *));
	else if (bute->spec == 'x' || bute->spec == 'X')
		len = ft_hex(bute, va_arg(arg, void *));
	else if (bute->spec == 'c' || bute->spec == 'C')
		len = ft_char(bute, va_arg(arg, void *));
	else
		len = (ft_char(bute, va_arg(arg, void *)));
	ft_strdel(&(bute->flag));
	return (len);
}
