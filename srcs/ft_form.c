/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_spec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 15:10:11 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/25 14:37:14 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static void		init_atri(t_atri *bute)
{
	bute->flag = ft_strdup(" *****");
	bute->wdth = -1;
	bute->pcsn = -1;
	bute->h = 0;
	bute->hh = 0;
	bute->l = 0;
	bute->ll = 0;
	bute->z = 0;
	bute->j = 0;
}

static void		ft_flag(char **f, t_atri *bute)
{
	if (**f == '#')
		(bute->flag)[1] = '#';
	else if (**f == '0')
		(bute->flag)[2] = '0';
	else if (**f == '-')
		(bute->flag)[3] = '-';
	else if (**f == '+')
		(bute->flag)[4] = '+';
	else if (**f == ' ')
		(bute->flag)[5] = ' ';
}

static int		ft_doublecf(char *format, char c)
{
	int		n;
	
	n = 0;
	while (ft_strchr(INDICATORS, *format))
	{
		if (*format == c)
			n++;
		format++;
	}
	if (n % 2 == 0)
		return (1);
	else
		return (0);
}

static void		ft_conv(char **format, t_atri *bute)
{
	if (**format == 'h' && !(bute->h) && !(bute->hh))
	{
		if (ft_doublecf(*format, 'h'))
			bute->hh = 1;
		else
			bute->h = 1;
	}
	if (**format == 'l' && !(bute->l) && !(bute->ll))
	{
		if (ft_doublecf(*format, 'l'))
			bute->ll = 1;
		else
			bute->l = 1;
	}
	if (**format == 'z')
		bute->z = 1;
	if (**format == 'j')
		bute->j = 1;
}

int				ft_form(char **format, va_list arg)
{
	t_atri	bute;
	init_atri(&bute);
	while ((ft_strchr(INDICATORS, **format)))
	{
		(ft_strchr(FLAGS, **format)) ? ft_flag(format, &bute) : 0;
		if (ft_isdigit(**format))
		{
			bute.wdth = ft_isuma(format);
			continue ;
		}
		if (**format == '.' && (*format)++)
		{
			bute.pcsn = ft_isuma(format);
			continue ;
		}
		(ft_strchr(CFLAGS, **format)) ? ft_conv(format, &bute) : 0;
		(*format)++;
	}
	if (ft_strchr(SPECIFIERS, **format))
		bute.spec = **format;
	else
		bute.spec = **format;
	return (ft_spec(&bute, arg));
}
