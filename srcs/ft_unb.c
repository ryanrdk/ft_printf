 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 17:31:33 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/31 17:32:09 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static size_t	ft_len(intmax_t n)
{
	size_t	i;
	
	i = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static size_t	ft_unblen(t_atri *bute, intmax_t n)
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

static size_t	ft_putunb(uintmax_t n, t_atri *bute)
{
	int len;
	
	len = 0;
	if (n == 0 && bute->pcsn == -2)
		return (0);
	if (n >= 10)
	{
		len += ft_putunb(n / 10, bute);
		len += ft_putchar(n % 10 + 48);
	}
	else
		len += ft_putchar(n + 48);
	return (len);
}

static int	ft_handler(t_atri *bute, uintmax_t n)
{
	int len;
	
	len = 0;
	if ((bute->flag)[2] == '0' && bute->pcsn == -1)
		(bute->flag)[0] = '0';
	bute->slen = ft_unblen(bute, n);
	while ((bute->flag[3] != '-' && bute->wdth > (bute->slen)))
		(len += ft_putchar((bute->flag)[0])) && bute->wdth--;
	while (bute->pcsn != -1 && bute->pcsn > 0)
		(len += ft_putchar('0')) && bute->pcsn--;
	len += ft_putunb(n, bute);
	while (bute->wdth > bute->slen && (bute->flag)[3] == '-')
		(len += ft_putchar(' ')) && bute->wdth--;
	return (len);
}

int			ft_unb(t_atri *bute, void *n)
{
	if (bute->spec == 'U')
		return (ft_handler(bute, (unsigned long)n));
	else if (bute->h)
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
		return (ft_handler(bute, (intmax_t)n));
	else
		return (ft_handler(bute, (unsigned int)n));
}
