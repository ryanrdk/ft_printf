# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/02 11:42:00 by rde-kwaa          #+#    #+#              #
#    Updated: 2018/07/18 12:34:21 by rde-kwaa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libftprintf.a

# Directories for Source files
DIR_LIB = libft/
DIR_SRC = srcs/

# Source Files
LIBFTS = ft_atoi.c ft_bzero.c ft_charneg.c ft_hidenp.c ft_htoa.c \
		 ft_isdigit.c ft_itoa.c ft_len.c ft_litoa.c ft_lotoa.c \
		 ft_lutoa.c ft_memalloc.c ft_neg.c ft_otoa.c ft_putchar.c \
		 ft_putnbr.c ft_putstr.c ft_strdup.c ft_strlen.c ft_strncat.c \
		 ft_strncpy.c ft_strnew.c ft_strsub.c ft_toupper.c ft_utoa.c
SRCS = ft_printf.c ft_find_spec.c ft_str.c ft_poi.c ft_nbr.c ft_lnbr.c \
	   ft_oct.c ft_loct.c ft_lunbr.c ft_unbr.c ft_hex.c ft_alt_hex.c \
	   ft_char.c

# Source file paths
SRC = 		$(addprefix $(DIR_SRC),$(SRCS))
LIBFT = 	$(addprefix $(DIR_LIB),$(LIBFTS))

# Objects
OBJ = 		$(SRCS:.c=.o) $(LIBFTS:.c=.o)

# Flags
FLAGS =		-Wall -Werror -Wextra
HEADER =	-Iincludes

all: 		$(NAME)

# Compilation
$(NAME):
			@gcc -c $(FLAGS) $(SRC) $(LIBFT) $(HEADER) 
			@ar rc $(NAME) $(OBJ)
			@ranlib $(NAME)
			@echo "Success!"
			@echo "$(NAME) created!"

# Cleaning up
clean:
			@rm -f $(OBJ)
			@echo "Object files deleted!"

fclean:		clean
			@rm -f $(NAME)
			@echo "libft.a deleted!"

re:			fclean all

.PHONY =	all clean fclean clean re
