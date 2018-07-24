/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_spec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 15:10:11 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/24 17:08:28 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static int	ft_handle_str(va_list arg, t_atri butes)
{
	int		len;

	len = 0;
	if (butes.spec == 's')
		len = ft_str(arg, butes);
	if (butes.spec == 'S')
		len = ft_wstr(arg, butes);
	if (butes.spec == 'c' || butes.spec == 'C')
		len = ft_char(arg, butes);
	return (len);
}

int			ft_find_spec(va_list arg, t_atri butes)
{
	int		len;

	len = 0;
	if (butes.spec == 's' || butes.spec == 'S' || butes.spec == 'c' \
			|| butes.spec == 'C')
		len = ft_handle_str(arg, butes);
	if (butes.spec == 'p')
		len = ft_poi(arg, butes);
	if (butes.spec == 'd' || butes.spec == 'i')
		len = ft_nbr(arg, butes);
	if (butes.spec == 'D')
		len = ft_lnbr(arg, butes);
	if (butes.spec == 'o')
		len = ft_oct(arg, butes);
	if (butes.spec == 'O')
		len = ft_octl(arg, butes);
	if (butes.spec == 'u')
		len = ft_unbr(arg, butes);
	if (butes.spec == 'U')
		len = ft_ulnbr(arg, butes);
	if (butes.spec == 'x')
		len = ft_hex(arg, butes);
	if (butes.spec == 'X')
		len = ft_hexu(arg, butes);
	return (len);
}
