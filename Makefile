# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/02 11:42:00 by rde-kwaa          #+#    #+#              #
#    Updated: 2018/08/01 18:09:23 by rde-kwaa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libftprintf.a

# Directories for Source files
DIR_LIB = libft/
DIR_SRC = srcs/

# Source Files
LIBFTS = ft_isuma.c ft_strdel.c ft_putchar.c ft_putstr.c ft_strchr.c \
	 ft_strdup.c ft_strlen.c ft_strlenp.c ft_memcpy.c ft_putwstr.c
SRCS = ft_printf.c ft_form.c ft_spec.c ft_lit.c ft_str.c ft_poi.c \
       ft_nbr.c ft_oct.c ft_unb.c ft_hex.c ft_char.c

# Source file paths
LIBFT = 	$(addprefix $(DIR_LIB),$(LIBFTS))
SRC = 		$(addprefix $(DIR_SRC),$(SRCS))

# Objects
OBJ = 		$(SRCS:.c=.o) $(LIBFTS:.c=.o)

# Flags
FLAGS =		-Wall -Werror -Wextra
HEADER =	-Iincludes

.PHONY =	all clean fclean re

all: $(NAME)

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
