/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 15:14:40 by abaldo-m          #+#    #+#             */
/*   Updated: 2025/01/16 15:14:42 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int get_height(char *file_name)
{
    char *line;
    int height = 0; // Inicializar a 0
    int fd;

    fd = open(file_name, O_RDONLY, 0);
    if (fd < 0)
        return (-1); // Manejar error de apertura de archivo
    line = get_next_line(fd);
    while (line != NULL)
    {
        height++;
        free(line);
        line = get_next_line(fd); // Leer la siguiente línea
    }
    close(fd);
    return(height);
}

int get_width(char *file_name)
{
    int fd;
    int width = 0;
    char *line;

    fd = open(file_name, O_RDONLY, 0);
    if (fd < 0)
        return (-1); // Manejar error de apertura de archivo
    line = get_next_line(fd);
    if (line)
    {
        width = ft_countwd(line, ' ');
        free(line); // Liberar memoria
    }
    close(fd);
    return (width);
}


void    fill_matrix(int *z_line, char *line)
{
    char **nums;
    int i;

    nums = ft_split(line, ' ');
    i = 0;
    while (nums[i])
    {
        z_line[i] = ft_atoi(nums[i]);
        free(nums[i]);
        i++;
    }
    free(nums);
}

void    read_file(char *file_name, fdf *data)
{
    int fd;
    int i;
    char *line;

    data->height = get_height(file_name);
    data->width = get_width(file_name);
    data->z_matrix = (int **)malloc(sizeof(int*) * (data->height + 1));
    i = 0;
    while (i <= data->height)
        data->z_matrix[i++] = (int*)malloc(sizeof(int) * (data->width + 1));
    fd = open(file_name, O_RDONLY, 0);
    i = 0;
    line = get_next_line(fd);
	while (line != NULL)
    {
        fill_matrix(data->z_matrix[i], line);
        free(line);
        i++;
    }
    close(fd);
    data->z_matrix[i] = NULL; 
}

