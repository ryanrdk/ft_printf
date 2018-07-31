# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/02 11:42:00 by rde-kwaa          #+#    #+#              #
#    Updated: 2018/07/27 12:38:18 by rde-kwaa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libftprintf.a

# Directories for Source files
DIR_LIB = libft/
DIR_SRC = srcs/

# Source Files
<<<<<<< HEAD
LIBFTS = ft_atoi.c ft_bzero.c ft_charneg.c ft_htoa.c \
		 ft_isdigit.c ft_isuma.c ft_itoa.c ft_len.c ft_ltoa.c \
		 ft_strdel.c ft_neg.c ft_oltoa.c ft_otoa.c ft_putchar.c \
		 ft_putnbr.c ft_putstr.c ft_putwstr.c ft_strchr.c ft_strdup.c \
		 ft_strlen.c ft_strncat.c ft_strncpy.c ft_memcpy.c\
		 ft_toupper.c ft_utoa.c ft_ultoa.c
SRCS = ft_printf.c ft_form.c ft_spec.c ft_str.c
=======
LIBFTS = ft_atoi.c ft_bzero.c ft_charneg.c ft_htoa.c ft_isdigit.c\
		 ft_isuma.c ft_itoa.c ft_len.c ft_ltoa.c ft_memdel.c ft_neg.c\
		 ft_oltoa.c ft_otoa.c ft_putchar.c ft_putnbr.c ft_putstr.c \
		 ft_putwstr.c ft_strchr.c ft_strdup.c ft_strlen.c ft_strncat.c \
		 ft_strncpy.c ft_toupper.c ft_utoa.c ft_ultoa.c
SRCS = ft_printf.c ft_form.c ft_flags.c ft_str.c ft_wstr.c ft_poi.c \
	   ft_nbr.c ft_lnbr.c ft_oct.c ft_octl.c ft_ulnbr.c ft_unbr.c \
	   ft_hex.c ft_hexu.c ft_char.c
>>>>>>> 56cb078bd0d645d34560dccbbb7115477be030ac

# Source file paths
LIBFT = 	$(addprefix $(DIR_LIB),$(LIBFTS))
SRC = 		$(addprefix $(DIR_SRC),$(SRCS))

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
