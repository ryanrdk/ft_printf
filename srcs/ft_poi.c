/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_poi.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 22:32:39 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/31 22:32:41 by rde-kwaa         ###   ########.fr       */
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

static size_t	ft_poilen(t_atri *bute, intmax_t n)
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

static size_t	ft_putpoi(uintmax_t n, t_atri *bute, char *base)
{
	int len;
	
	len = 0;
	if (n == 0 && bute->pcsn == -2)
		return (0);
	if (n >= 16)
	{
		len += ft_putpoi(n / 16, bute, base);
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
	bute->slen = ft_poilen(bute, n);
	if (bute->flag[0] == '0')
		len += ft_putstr("0x", -1);
	while ((bute->flag[3] != '-' && bute->wdth > (bute->slen)))
		(len += ft_putchar((bute->flag)[0])) && bute->wdth--;
	if ((bute->flag)[0] == ' ')
		len += ft_putstr("0x", -1);
	while (bute->pcsn != -1 && bute->pcsn > 0)
		(len += ft_putchar('0')) && bute->pcsn--;
	len += ft_putpoi(n, bute, "0123456789abcdef");
	while (bute->wdth > bute->slen && (bute->flag)[3] == '-')
		(len += ft_putchar(' ')) && bute->wdth--;
	return (len);
}

int			ft_poi(t_atri *bute, void *n)
{
	return (ft_handler(bute, (uintmax_t)n));
}
