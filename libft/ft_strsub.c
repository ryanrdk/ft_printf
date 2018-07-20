/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 13:37:24 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/20 15:38:37 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ret;

	if (!s)
		return (NULL);
	ret = (char*)malloc(sizeof(char) * len + 1);
	if (!ret)
		return (NULL);
	ret = ft_strncpy(ret, (s + start), len);
	ret[len] = '\0';
	return (ret);
}
