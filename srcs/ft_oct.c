/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_oct.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 18:59:31 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/20 16:32:43 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int		ft_oct(va_list arg, char f)
{
	unsigned int	n;
	char			*s;

	n = va_arg(arg, unsigned int);
	if (f == '#')
		ft_putstr("0");
	s = ft_otoa(n);
	if (s)
	{
		ft_putstr(s);
	}
	return (ft_strlen(s));
}
