/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_spec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 15:10:11 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/27 12:23:44 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static int	ft_find_spec(va_list arg, t_atri bute)
{
	if (bute.spec == 's')
		bute.lnth = ft_str(arg, bute);
	if (bute.spec == 'S')
		bute.lnth = ft_wstr(arg, bute);
	if (bute.spec == 'c' || bute.spec == 'C')
		bute.lnth = ft_char(arg, bute);
	if (bute.spec == 'p')
		bute.lnth = ft_poi(arg, bute);
	if (bute.spec == 'd' || bute.spec == 'i')
		bute.lnth = ft_nbr(arg, bute);
	if (bute.spec == 'D')
		bute.lnth = ft_lnbr(arg, bute);
	if (bute.spec == 'o')
		bute.lnth = ft_oct(arg, bute);
	if (bute.spec == 'O')
		bute.lnth = ft_octl(arg, bute);
	if (bute.spec == 'u')
		bute.lnth = ft_unbr(arg, bute);
	if (bute.spec == 'U')
		bute.lnth = ft_ulnbr(arg, bute);
	if (bute.spec == 'x')
		bute.lnth = ft_hex(arg, bute);
	if (bute.spec == 'X')
		bute.lnth = ft_hexu(arg, bute);
	return (bute.lnth);
}

int			ft_form(va_list arg, t_atri bute)
{
	int	i;
	int	w[42];

	i = 0;
	if (ft_strchr(FLAGS, *++bute.buf) == 1)
		bute.flag = *bute.buf++;
	while (ft_isdigit(*bute.buf))
		w[i++] = *bute.buf++ - 48;
	if (i)
		bute.wdth = ft_isuma(w, i);
	if (ft_strchr(SPECIFIERS, *bute.buf))		
	{
		bute.spec = *bute.buf;
		bute.buf++;
		bute.lnth += ft_find_spec(arg, bute);
	}
	return (bute.lnth);
}
