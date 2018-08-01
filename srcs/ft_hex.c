/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 21:54:12 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/31 21:54:16 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static size_t	ft_len(intmax_t n)
{
	size_t	i;
	
	i = 1;
	if (n == 0)
		return (1);
	n /= 16;
	while (n)
	{
		n /= 16;
		i++;
	}
	return (i);
}

static size_t	ft_hexlen(t_atri *bute, intmax_t n)
{
	int		cnt;
	int		nb;
	
	cnt = ft_len(n);
	nb = 0;
	if (bute->pcsn != -1 && bute->pcsn > cnt)
	{
		nb = (bute->pcsn - cnt);
		cnt = bute->pcsn;
	}
	if (bute->flag[1] == '#' && n != 0)
		cnt += 2;
	if (cnt > 0)
		bute->pcsn = nb;
	else if (n == 0 && bute->pcsn == 0)
	{
		bute->pcsn = -2;
		cnt = 0;
	}
	else
		bute->pcsn = -1;
	return (cnt);
}

static size_t	ft_puthex(uintmax_t n, t_atri *bute, char *base)
{
	int len;
	
	len = 0;
	if (n == 0 && bute->pcsn == -2)
		return (0);
	if (n >= 16)
	{
		len += ft_puthex(n / 16, bute, base);
		len += ft_putchar(base[n % 16]) ;
	}
	else
		len += ft_putchar(base[n % 16]);
	return (len);
}

static int	ft_handler(t_atri *bute, uintmax_t n)
{
	int	len;
	
	len = 0;
	if ((bute->flag)[2] == '0' && bute->pcsn == -1)
		(bute->flag)[0] = '0';
	bute->slen = ft_hexlen(bute, n);
	if (bute->flag[0] == '0' && bute->flag[1] == '#' && n != 0)
		len += (bute->spec == 'X') ? ft_putstr("0X", -1) : ft_putstr("0x", -1);
	while ((bute->flag[3] != '-' && bute->wdth > (bute->slen)))
		(len += ft_putchar((bute->flag)[0])) && bute->wdth--;
	if ((bute->flag)[0] == ' ' && bute->flag[1] == '#' && n != 0)
		len += (bute->spec == 'X') ? ft_putstr("0X", -1) : ft_putstr("0x", -1);
	while (bute->pcsn != -1 && bute->pcsn > 0)
		(len += ft_putchar('0')) && bute->pcsn--;
	len += (bute->spec == 'X') ? ft_puthex(n, bute, "0123456789ABCDEF") : \
	ft_puthex(n, bute, "0123456789abcdef");
	while (bute->wdth > bute->slen && (bute->flag)[3] == '-')
		(len += ft_putchar(' ')) && bute->wdth--;
	return (len);
}

int			ft_hex(t_atri *bute, void *n)
{
	if (bute->h)
		return (ft_handler(bute, (unsigned short)n));
	else if (bute->hh)
		return (ft_handler(bute, (unsigned char)n));
	else if (bute->l)
		return (ft_handler(bute, (unsigned long)n));
	else if (bute->ll)
		return (ft_handler(bute, (unsigned long long)n));
	else if (bute->z)
		return (ft_handler(bute, (size_t)n));
	else if (bute->j)
		return (ft_handler(bute, (uintmax_t)n));
	else
		return (ft_handler(bute, (unsigned int)n));
}
