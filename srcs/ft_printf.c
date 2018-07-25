/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 12:36:32 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/25 12:01:51 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int		ft_printf(const char *format, ...)
{
	va_list	args;
	t_atri	bute;
	int		i;
	int		w[256];

	va_start(args, format);
	ft_bzero(&bute, sizeof(t_atri));
	i = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			if (ft_hidenp(*++format, FLAGS) == 1)
				bute.flag = *format++;
			while (ft_isdigit(*format))
				w[i++] = *format++ - 48;
			bute.wdth = ft_isuma(w, i);
			if (ft_hidenp(*format, SPECIFIERS))
			{
				bute.spec = *format;
				bute.lnth += ft_find_spec(args, bute);
			}
		}
		else
		{
			ft_putchar(*format);
			++bute.lnth;
		}
		++format;
	}
	va_end(args);
	return (bute.lnth);
}
