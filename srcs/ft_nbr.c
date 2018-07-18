/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 12:18:46 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/09 14:29:28 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int		ft_nbr(va_list arg)
{
	int		n;
	char	*s;

	n = va_arg(arg, int);
	s = ft_itoa(n);
	ft_putstr(s);
	return (ft_strlen(s));
}
