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

int		ft_str(t_atri *bute, void *str)
{
	int len;
	
	bute->slen = (str != NULL) ? ft_strlen((char *)str) : 6;
	len = 0;
	bute->slen = !bute->pcsn ? bute->wdth : bute->slen;
	if ((bute->flag)[2] == '0')
		(bute->flag)[0] = '0';
	while ((bute->flag)[3] != '-' && bute->wdth > bute->slen)
		(len += ft_putchar((bute->flag)[0])) && (bute->wdth)--;
	while ((bute->flag)[3] != '-' && bute->wdth > bute->pcsn &&
		   bute->pcsn != -1 && (bute->slen > bute->pcsn))
		len += ft_putchar((bute->flag)[0]) && bute->wdth--;
	if (bute->spec == 's' && !bute->l)
		len += ft_putstr((char *)str, bute->pcsn);
	//else if (bute->spec == 'S' || (bute->spec == 's' && bute->l))
	//	len += ft_print_wstr((wchar_t *)str, bute->pcsn);
	while ((bute->flag)[3] == '-' && bute->wdth > bute->slen)
		len += ft_putchar(' ') && bute->wdth--;
	while ((bute->flag)[3] == '-' && bute->wdth > bute->pcsn &&
		   bute->pcsn != -1 && (bute->slen-- - bute->pcsn))
		len += ft_putchar(' ');
	return (len);
}
