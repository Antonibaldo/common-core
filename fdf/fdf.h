/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 16:42:33 by abaldo-m          #+#    #+#             */
/*   Updated: 2025/01/13 20:01:55 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "minilibx-linux/mlx.h"
# include "libft/libft.h"
# include <math.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>

typedef struct
{
    int width;
    int height;
    int **z_matrix;

    void    *mlx_ptr;
    void    *win_ptr;
}           fdf;

void    read_file(char *file_name, fdf *data);
#endif
