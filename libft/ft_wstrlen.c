/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 11:44:38 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/06/01 14:22:02 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int        ft_wclen(wchar_t wc)
{
    int        len;
    
    len = 0;
    if (wc <= 0xFF)
        len = 1;
    else if (wc < 0x0800)
        len = 2;
    else if (wc < 0x010000)
        len = 3;
    else if (wc < 0x110000)
        len = 4;
    return (len);
}

size_t    ft_wstrlen(wchar_t *ws)
{
    size_t    len;
    
    len = 0;
    while (*ws)
    {
        len += ft_wclen(*ws);
        ws += 1;
    }
    return (len);
}
