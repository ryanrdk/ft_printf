/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 14:23:45 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/25 14:34:29 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int					ft_isdigit(int c);
int					ft_isuma(char **s);
void				ft_strdel(char **ap);
int					ft_putchar(int c);
int					ft_putstr(char const *str, int p);
int					ft_strchr(char *s, int c);
char				*ft_strdup(char const *src);
int					ft_strlen(char const *s);
int					ft_strlenp(char const *s, int p);
void				*ft_memcpy( void *dst, const void *src, size_t n);

#endif
