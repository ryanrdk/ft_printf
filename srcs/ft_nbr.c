/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 12:10:28 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/24 14:44:49 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static size_t	ft_len(intmax_t n)
{
	size_t	i;

	i = 1;
	n /= 10;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static size_t	ft_nbrlen(t_atri *bute, intmax_t n)
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
	if ((n < 0) || (((bute->flag)[4] == '+' || (bute->flag)[5] == ' ') \
					&& n >= 0))
		cnt++;
	return (cnt);
}

static size_t	ft_putnbr(intmax_t n, t_atri *bute)
{
	int len;

	len = 0;
	if (n == 0 && bute->pcsn == -2)
		return (0);
	if (n >= -9 && n <= 9)
		len += ft_putchar(ABS(n) + 48);
	else
	{
		len += ft_putnbr(n / 10, bute);
		len += ft_putnbr(n % 10, bute);
	}
	return (len);
}

static int		ft_handler(t_atri *bute, intmax_t n, int len)
{
	if ((bute->flag)[2] == '0' && bute->pcsn == -1)
		(bute->flag)[0] = '0';
	bute->slen = ft_nbrlen(bute, n);
	if (n < 0 && bute->flag[0] == '0')
		len += ft_putchar('-');
	else if (n >= 0 && bute->flag[0] == '0' && bute->flag[4] == '+')
		len += ft_putchar('+');
	else if (bute->flag[0] == '0' && bute->flag[5] == ' ')
		len += ft_putchar(' ');
	while ((bute->flag[3] != '-' && bute->wdth > (bute->slen)))
		(len += ft_putchar((bute->flag)[0])) && bute->wdth--;
	if ((bute->flag)[4] == '+' && n >= 0 && bute->flag[0] != '0')
		len += ft_putchar('+');
	else if (n < 0 && bute->flag[0] == ' ' && bute->flag[0] != '0')
		len += ft_putchar('-');
	else if ((bute->flag)[5] == ' ' & n >= 0 && bute->flag[0] != '0')
		len += ft_putchar(' ');
	while (bute->pcsn != -1 && bute->pcsn > 0)
		(len += ft_putchar('0')) && bute->pcsn--;
	len += ft_putnbr(n, bute);
	while (bute->wdth > bute->slen && (bute->flag)[3] == '-')
		(len += ft_putchar(' ')) && bute->wdth--;
	return (len);
}

int				ft_nbr(t_atri *bute, void *n)
{
	int len;

	len = 0;
	if (bute->spec == 'D')
		ft_handler(bute, (long)n, len);
	else if (bute->h)
		ft_handler(bute, (short)n, len);
	else if (bute->hh)
		ft_handler(bute, (char)n, len);
	else if (bute->l)
		ft_handler(bute, (long)n, len);
	else if (bute->ll)
		ft_handler(bute, (long long)n, len);
	else if (bute->z)
		ft_handler(bute, (size_t)n, len);
	else if (bute->j)
		ft_handler(bute, (intmax_t)n, len);
	else
		ft_handler(bute, (int)n, len);
	return (len);
}
