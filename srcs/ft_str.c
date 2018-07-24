/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 12:10:28 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/24 14:44:49 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int		ft_str(va_list arg, t_atri butes)
{
	char	*s;

	butes.flag = '#';
	s = va_arg(arg, char*);
	if (!s)
	{
		ft_putstr("(null)");
		return (0);
	}
	ft_putstr(s);
	return (ft_strlen(s));
}
