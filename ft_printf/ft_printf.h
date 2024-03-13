/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:55:10 by iescalon          #+#    #+#             */
/*   Updated: 2024/03/13 13:48:01 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include "../libft_gnl/libft.h"

int	ft_putchar(int c);
int	ft_putstr(char *s);
int	ft_printf(const char *s, ...);
int	ft_putnbr(int nbr);
int	ft_put_unsignednbr(unsigned int nbr);
int	ft_puthex(unsigned long int nbr, char c);
int	ft_putptr(unsigned long int ptr);

#endif
