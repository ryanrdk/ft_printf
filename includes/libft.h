/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 14:23:45 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/27 12:38:16 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

<<<<<<< HEAD
int					ft_isdigit(int c);
int					ft_isuma(char **s);
void				ft_strdel(char **ap);
int					ft_putchar(int c);
int					ft_putstr(char const *str, int p);
int					ft_strchr(char *s, int c);
=======
int					ft_atoi(char const *s);
void				ft_bzero(void *s, size_t n);
int					ft_charneg(char c);
char				*ft_htoa(unsigned long n);
int					ft_isdigit(int c);
int					ft_isuma(int *t, int n);
char				*ft_itoa(int n);
size_t				ft_len(size_t n);
char				*ft_ltoa(long n);
void				ft_memdel(char **ap);
int					ft_neg(signed long long n);
char				*ft_oltoa(unsigned long n);
char				*ft_otoa(unsigned int n);
void				ft_putchar(char c);
void				ft_putnbr(int n);
int					ft_putstr(char const *s);
int					ft_putwstr(wchar_t *ws);
int					ft_strchr(char const *s, char c);
>>>>>>> 56cb078bd0d645d34560dccbbb7115477be030ac
char				*ft_strdup(char const *src);
int					ft_strlen(char const *s);
int					ft_strlenp(char const *s, int p);
void				*ft_memcpy( void *dst, const void *src, size_t n);

#endif
