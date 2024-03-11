# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/07 14:07:10 by iescalon          #+#    #+#              #
#    Updated: 2024/03/11 11:39:58 by iescalon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			:= so_long
MLX_CF			:= -framework OpenGL -framework AppKit
CFLAGS			:= -Wall -Wextra -Werror -Ilib/libft
MLX_PATH		:= mlx
LIBFT_PATH		:= libft_gnl
FT_PRINTF_PATH	:= ft_printf
INCLUDE			:= src/so_long.h
SRC				:=

all: $(NAME)

$(NAME): $(SRC) $(INCLUDE)
	mkdir -p archives_a
	make -C $(MLX_PATH) 2>/dev/null
	make -C $(LIBFT_PATH)
	make -C $(FT_PRINTF_PATH)
	mv $(MLX_PATH)/libmlx.a archives_a/
	mv $(LIBFT_PATH)/libft.a archives_a/
	mv $(FT_PRINTF_PATH)/libftprintf.a archives_a/
	cc $(CFLAGS) $(MLX_CF) archives_a/libft.a archives_a/libftprintf.a archives_a/libmlx.a $(SRC) -o $(NAME)

clean:
	rm -rf $(OBJ)
	make -C $(LIBFT_PATH) clean
	make -C $(FT_PRINTF_PATH) clean
	make -C $(MLX_PATH) clean
	rm -rf obj
	rm -rf archives_a

fclean: clean
	rm -rf $(NAME)

re: clean all

.PHONY: all clean fclean re