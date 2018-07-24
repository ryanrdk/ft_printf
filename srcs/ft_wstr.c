/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 14:24:31 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/24 14:44:27 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	ft_wstr(va_list arg, t_atri butes)
{
	wchar_t	*s;
	int	len;

	butes.flag = '#';
	s = va_arg(arg, wchar_t*);
	if (!s)
	{
		ft_putstr("(null)");
		return (0);
	}
	len = ft_putwstr(s);
	return (len);
}
