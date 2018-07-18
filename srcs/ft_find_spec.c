/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_spec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 15:10:11 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/18 12:29:06 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int		ft_find_spec(va_list arg, char c)
{
	if (c == 's')
		ft_str(arg);
	if (c == 'p')
		ft_poi(arg);
	if (c == 'd' || c == 'i')
		ft_nbr(arg);
	if (c == 'D')
		ft_lnbr(arg);
	if (c == 'o')
		ft_oct(arg);
	if (c == 'O')
		ft_loct(arg);
	if (c == 'u')
		ft_unbr(arg);
	if (c == 'U')
		ft_lunbr(arg);
	if (c == 'x')
		ft_hex(arg);
	if (c == 'X')
		ft_alt_hex(arg);
	if (c == 'c' || c == 'C')
		ft_char(arg);
	return (1);
}
