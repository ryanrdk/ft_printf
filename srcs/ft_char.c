/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 12:10:28 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/24 14:44:49 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int		ft_char(t_atri *bute, void *c)
{
	int len;

	len = 0;
	if ((bute->flag)[2] == '0')
		(bute->flag)[0] = '0';
	if ((bute->flag)[3] != '-' && bute->wdth > 1)
		while (--(bute->wdth))
			len += ft_putchar((bute->flag)[0]);
	if (bute->spec == 'c' && !bute->l)
		len += ft_putchar((int)c);
	else if (bute->spec == 'C' || (bute->spec == 'c' && bute->l))
		len += ft_putchar((int)c);
	else
		len += ft_putchar(bute->spec);
	if (bute->wdth > 1 && (bute->flag)[3] == '-')
		while (--(bute->wdth))
			len += ft_putchar(' ');
	return (len);
}
