/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_oct.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 18:59:31 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/20 16:25:49 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int		ft_oct(va_list arg, char f)
{
	unsigned int	n;
	char			*s;

	n = va_arg(arg, unsigned int);
	if (n == 0)
		ft_putchar('0');
	else if (f == '#' && n != 0)
		ft_putstr("");
	s = ft_otoa(n);
	if (s)
	{
		ft_putstr(s);
	}
	return (ft_strlen(s));
}
