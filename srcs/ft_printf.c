/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 12:36:32 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/27 12:38:05 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int		ft_printf(const char *format, ...)
{
	va_list	args;
<<<<<<< HEAD
	int 	len;
	
	va_start(args, format);
	len = 0;
	while (*format != '\0')
	{
		if (*format != '%')
			len += ft_putchar(*format);
		else
		{
			format++;
			len += ft_form((char**)(&format), args);
		}
		format++;
=======
	t_atri	bute;

	ft_bzero(&bute, sizeof(t_atri));
	bute.lnth = 0;
	bute.buf = format;
	va_start(args, format);
	while (*bute.buf != '\0')
	{
		if (*bute.buf == '%')
		{
			ft_form(args, bute);
			bute.buf++;
		}
		else
		{
			ft_putchar(*bute.buf);
			++bute.lnth;
		}
>>>>>>> 56cb078bd0d645d34560dccbbb7115477be030ac
	}
	va_end(args);
	return (len);
}
