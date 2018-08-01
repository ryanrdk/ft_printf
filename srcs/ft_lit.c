/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 12:10:28 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/24 14:44:49 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int		ft_lit(t_atri *bute, char c)
{
	int	len;

	len = 0;
	if ((bute->flag)[2] == '0')
		(bute->flag)[0] = '0';
	if ((bute->flag)[3] != '-' && bute->wdth > 1)
		while (((bute->wdth)-- - 1))
			len += ft_putchar((bute->flag)[0]);
	len += ft_putchar(c);
	if (bute->wdth > 1 && (bute->flag)[3] == '-')
		while ((bute->wdth)-- - 1)
			len += ft_putchar(' ');
	return (len);
}
