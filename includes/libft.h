/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 14:23:45 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/07/23 16:55:36 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int					ft_atoi(char const *s);
void				ft_bzero(void *s, size_t n);
int					ft_charneg(char c);
int					ft_hidenp(char c, char *s);
char				*ft_htoa(unsigned long n);
int					ft_isdigit(int c);
char				*ft_itoa(int n);
size_t				ft_len(size_t n);
char				*ft_ltoa(long n);
void				*ft_memalloc(size_t size);
int					ft_neg(signed long long n);
char				*ft_oltoa(unsigned long n);
char				*ft_otoa(unsigned int n);
void				ft_putchar(char c);
void				ft_putnbr(int n);
void				ft_putstr(char const *s);
char				*ft_strchr(char const *s, int c);
char				*ft_strdup(char const *src);
size_t				ft_strlen(char const *s);
char				*ft_strncat(char *dst, char const *src, size_t n);
char				*ft_strncpy(char *dst, char const *src, size_t n);
char				*ft_strnew(size_t size);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_toupper(char *s);
char				*ft_utoa(unsigned int n);
char				*ft_ultoa(unsigned long n);


#endif
