/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 00:05:17 by jaleman           #+#    #+#             */
/*   Updated: 2018/07/27 12:28:06 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdint.h>
#include "../includes/ft_printf.h"

int	main(void)
{
	ft_printf("This is simply a %#o string.\n", 2000);
	return (0);
}
