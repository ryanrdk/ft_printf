/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 12:18:46 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/21 13:17:14 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int		ft_nbr(va_list arg, char f)
{
	int		n;
	char	*s;
	int		len;

	n = va_arg(arg, int);
	len = ft_flags(f, 'd', (long long)n);
	s = ft_itoa(n);
	ft_putstr(s);
	len += ft_strlen(s);
	return (len);
}
