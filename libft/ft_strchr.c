/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 13:26:34 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/27 12:09:18 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
int	ft_strchr(char *s, int c)
=======
int		ft_strchr(char const *s, char c)
>>>>>>> 56cb078bd0d645d34560dccbbb7115477be030ac
{
	while (*s != '\0')
	{
		if (*s == c)
			return (1);
		s++;
	}
<<<<<<< HEAD
	if (*s == '\0' && c == '\0')
		return (0);
=======
	if (*s == c)
		return (1);
>>>>>>> 56cb078bd0d645d34560dccbbb7115477be030ac
	return (0);
}
