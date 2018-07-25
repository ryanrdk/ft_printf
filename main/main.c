/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 00:05:17 by jaleman           #+#    #+#             */
/*   Updated: 2018/07/25 14:39:54 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdint.h>
#include "../includes/ft_printf.h"

int	main(void)
{
	ft_printf("Testing: %13s\n", "zone");
	ft_printf(" is %d bytes long.\n", ft_printf("%D", 1234567890));
	return (0);
}
