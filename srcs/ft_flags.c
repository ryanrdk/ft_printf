/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 17:15:47 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/19 19:05:05 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int		ft_flags(va_list arg, char f, char c)
{
	int	len;

	len = 0;
	if (f == '#')
		len = ft_hash(arg, c);
	return (len);
}

