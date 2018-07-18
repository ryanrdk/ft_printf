/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 12:36:32 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/18 11:08:53 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int		ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;

	va_start(args, format);
	len = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
				ft_putchar('%');
			else if (ft_hidenp(*format, SPECIFIERS) == 1)
				ft_find_spec(args, *format);
			else if (ft_hidenp(*format, FLAGS) == 1)
				format++;
		}
		else
			ft_putchar(*format);
		++format;
		++len;
	}
	va_end(args);
	return (len);
}
