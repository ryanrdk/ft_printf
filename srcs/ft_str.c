/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 12:10:28 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/10 16:11:55 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int		ft_str(va_list arg)
{
	char	*s;

	s = va_arg(arg, char*);
	if (!s)
	{
		ft_putstr("(null)");
		return (2);
	}
	ft_putstr(s);
	return (ft_strlen(s));
}
