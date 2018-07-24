/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 12:36:32 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/24 17:37:06 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int		ft_printf(const char *format, ...)
{
	va_list	args;
	t_atri	butes;
	int		len;
	int		i;
	int		w[256];

	va_start(args, format);
	ft_bzero(&butes, sizeof(t_atri));
	len = 0;
	i = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
				ft_putchar('%');
			else if (ft_hidenp(*format, FLAGS) == 1)
				butes.flag = *format++;
			while (ft_isdigit(*format))
				w[i++] = *format++ - 48;
			butes.wdth = ft_isuma(w, i);
			if (ft_hidenp(*format, SPECIFIERS))
			{
				butes.spec = *format;
				len += ft_find_spec(args, butes);
			}
		}
		else
		{
			ft_putchar(*format);
			++len;
		}
		++format;
		//butes.flag = (char)0;
	}
	va_end(args);
	return (len);
}
