# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rloulizi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/10 18:25:40 by rloulizi          #+#    #+#              #
#*   Updated: 2017/05/05 19:31:00 by momar            ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

CC = clang
LIBFT = libft/libft.a
NAME = fillit

FLAGS = -Iinclude -Wall -Wextra -Werror

SRCS = src/main.c src/check.c src/read.c src/parse_piece.c src/map.c src/map_apply.c \
	   src/fillit.c src/check_symbol.c

OBJ = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	make -C ./libft/
	$(CC) -o $@ $(OBJ) $(LIBFT) $(FLAGS)

%.o : %.c
	$(CC) -c $< -o $@ $(FLAGS)

src_clean :
	rm -f $(OBJ)

clean :
	make clean -C ./libft
	rm -f $(OBJ)

fclean : clean
	make fclean -C ./libft
	rm -f $(NAME)

re : fclean all

.PHONY : clean fclean re all src_clean
