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
	va_list		args;
	int			len;

	va_start(args, format);
	len = 0;
	while (*format != '\0')
	{
		if (*format != '%')
			len += ft_putchar(*format);
		else
		{
			format++;
			len += ft_form((char*)(&format), args);
		}
		format++;
	}
	va_end(args);
	return (len);
}
