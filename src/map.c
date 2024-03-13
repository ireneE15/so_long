/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:00:20 by iescalon          #+#    #+#             */
/*   Updated: 2024/03/13 13:06:17 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int main() {
    void *mlx_ptr;
    void *win_ptr;

    // Inicializar la conexión con el servidor gráfico
    mlx_ptr = mlx_init();
    if (mlx_ptr == NULL) {
        return 1;
    }

    // Crear una ventana de 500x500 píxeles
    win_ptr = mlx_new_window(mlx_ptr, 500, 500, "Mi Ventana");

    // Loop principal para mantener la ventana abierta
    mlx_loop(mlx_ptr);

    return 0;
}

