/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_spec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 15:10:11 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/21 10:49:33 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int		ft_find_spec(va_list arg, char c, char f)
{
	int	len;

	len = 0;
	if (c == 's')
		len = ft_str(arg);
	if (c == 'p')
		len = ft_poi(arg, f);
	if (c == 'd' || c == 'i')
		len = ft_nbr(arg, f);
	if (c == 'D')
		len = ft_lnbr(arg, f);
	if (c == 'o')
		len = ft_oct(arg, f);
	if (c == 'O')
		len = ft_loct(arg, f);
	if (c == 'u')
		len = ft_unbr(arg, f);
	if (c == 'U')
		len = ft_lunbr(arg, f);
	if (c == 'x')
		len = ft_hex(arg, f);
	if (c == 'X')
		len = ft_alt_hex(arg, f);
	if (c == 'c' || c == 'C')
		len = ft_char(arg);
	return (len);
}
