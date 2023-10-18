# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: damedina <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/28 17:03:19 by damedina          #+#    #+#              #
#    Updated: 2023/10/04 19:44:13 by damedina         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIB = ar rcs
RM = rm -f

LIBFT = -C libft

SRC = ft_printf.c print_c.c print_s.c print_p.c print_d_i.c print_u.c dec_hex.c
OBJ = $(SRC:.c=.o)

all:		$(NAME)

$(NAME):	libft $(OBJ)
	cp ./libft/libft.a $(NAME)
	$(LIB) $(NAME) $(OBJ)

clean:		fclean_libft
	$(RM) *.o

fclean:		fclean_libft clean
	$(RM) $(NAME)

libft:
	make $(LIBFT)

clean_libft:
	make clean $(LIBFT)

fclean_libft:
	make fclean $(LIBFT)

re:			fclean all

.PHONY: 	all clean fclean re libft
