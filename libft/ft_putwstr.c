/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wchar.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 17:40:41 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/25 14:49:06 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wclen(unsigned int wc)
{
	if (wc <= 127)
		return (1);
	else if (wc <= 2047)
		return (2);
	else if (wc <= 65535)
		return (3);
	else if (wc <= 2097151)
		return (4);
	else
		return (0);
}

static int			ft_putwchar(wchar_t wc)
{
	int				len;
	int				slen;
	unsigned int	curr;
	
	len = 0;
	slen = ft_wclen(wc);
	if (slen == 1)
		return (ft_putchar(wc));
	curr = (240 << (4 - slen)) | (wc >> (( slen -1) * 6));
	len += ft_putchar(curr);
	slen--;
	while (slen)
	{
		curr = ((wc >> ((slen) * 6)) & 63) | 128;
		len += ft_putchar(curr);
	}
	return (len);
}

int			ft_putwstr(wchar_t *ws, int p)
{
	int		len;

	len = 0;
	if (ws == NULL)
		return (ft_putstr("(null)", p));
	while (*ws)
	{
		len += ft_putwchar(*ws);
		ws++;
	}
	return (len);
}
