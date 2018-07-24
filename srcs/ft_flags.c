/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 17:15:47 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/24 17:06:46 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

/*static int	ft_left()
{
	
}*/

static int	ft_plus(long long n)
{
	if (n > 0)
	{
		ft_putchar('+');
		return (1);
	}
	return (0);
}

static int	ft_hash(char c, long long n)
{
	int	len;
	
	len = 0;
	if ((c == 'o' || c == 'O'))
	{
		if (n != 0)
			ft_putstr("0");
		len++;
	}
	else if (c == 'x')
	{
		ft_putstr("0x");
		len = 2;
	}
	else if (c == 'X')
	{
		ft_putstr("0X");
		len = 2;
	}
	return (len);
}


int			ft_flags(char f, char c, long long n)
{
	int	len;

	len = 0;
	if (f == '#')
		len = ft_hash(c, n);
	else if (f == '+' && (c != 'o' || c != 'O') && (c != 'u' || c != 'U'))
		len = ft_plus(n);
	/*if (f == '0')
	if (f == '-')
		len = ft_left();*/
	return (len);
}
