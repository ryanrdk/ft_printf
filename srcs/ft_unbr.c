/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unbr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 12:24:47 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/16 16:37:14 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int		ft_unbr(va_list arg)
{
	unsigned int	n;
	char			*s;

	n = va_arg(arg, unsigned int);
	s = ft_utoa(n);
	ft_putstr(s);
	return (ft_strlen(s));
}
