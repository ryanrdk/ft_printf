/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 12:36:32 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/20 13:31:40 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"
#include <stdio.h>

int		ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;
	char	flag;

	va_start(args, format);
	len = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
				ft_putchar('%');
			else if (ft_hidenp(*format, FLAGS) == 1)
			{
				flag = *format++;
				len += ft_flags(flag, *format);
			}
			/*while (!ft_hidenp(*format, SPECIFIERS))
				format++;*/
			if (ft_hidenp(*format, SPECIFIERS))
				len += ft_find_spec(args, *format);
		}
		else
		{
			ft_putchar(*format);
			++len;
		}
		++format;
	}
	va_end(args);
	return (len);
}
