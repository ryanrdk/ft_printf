/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 12:06:30 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/24 14:43:13 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int		ft_char(va_list arg, t_atri bute)
{
	char	c;

	bute.flag = '#';
	c = va_arg(arg, int);
	ft_putchar(c);
	return (1);
}
