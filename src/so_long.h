/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:23:50 by iescalon          #+#    #+#             */
/*   Updated: 2024/03/13 13:13:58 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../libft_gnl/libft.h"
# include "../ft_printf/ft_printf.h"
# include "../mlx/mlx.h"
# include <stdbool.h>
# define W 'w'
# define A 'a'
# define S 's'
# define D 'd'
# define ESC 100

typedef struct s_player
{
	int		x;
	int		y;
	int		moves;
	bool	exit;
} t_player;

#endif