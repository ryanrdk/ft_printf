/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_oct.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 18:59:31 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/21 13:17:58 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int		ft_loct(va_list arg, char f)
{
	unsigned int	n;
	char			*s;
	int				len;

	n = va_arg(arg, unsigned int);
	len = ft_flags(f, 'O', (long long)n);
	s = ft_lotoa(n);
	ft_putstr(s);
	len += ft_strlen(s);
	return (len);
}
