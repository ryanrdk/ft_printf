/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 17:30:07 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/25 14:42:45 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putstr(const char *str, int p)
{
	int		len;
	char	*tmp;

	len = 0;
	if (str == NULL)
		return (ft_putstr("(null)", p));
	len = ft_strlenp(str, p);
	tmp = (char*)malloc(sizeof(char) * (len + 1));
	strncpy(tmp, str, len);
	write(1, tmp, len);
	return (len);
}
