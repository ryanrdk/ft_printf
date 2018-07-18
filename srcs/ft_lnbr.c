/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lnbr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 12:24:47 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/18 12:25:41 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int		ft_lnbr(va_list arg)
{
	long long int	n;
	char		*s;

	n = va_arg(arg, long long int);
	s = ft_litoa(n);
	ft_putstr(s);
	return (ft_strlen(s));
}
