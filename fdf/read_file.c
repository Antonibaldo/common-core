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
    int height = 0;
    int fd;

    // Abrir archivo
    fd = open(file_name, O_RDONLY);
    if (fd < 0)
    {
        perror("Error opening file");
        return -1;
    }

    // Leer línea por línea
    while ((line = get_next_line(fd)) != NULL)
    {
        height++;
        free(line);
    }

    // Cerrar archivo
    if (close(fd) < 0)
    {
        perror("Error closing file");
        return -1;
    }

    return height;
}

int get_width(char *file_name)
{
    int fd;
    int width = 0;
    char *line;

    fd = open(file_name, O_RDONLY, 0);
    line = get_next_line(fd);
    if (line)
    {
        width = ft_countwd(line, ' ');
        free(line);
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
    printf("Height: %d\n", data->height);
    data->width = get_width(file_name);
    printf("Width: %d\n", data->width);

    data->z_matrix = (int **)malloc(sizeof(int*) * (data->height + 1));
    i = 0;
    while (i <= data->height)
        data->z_matrix[i++] = (int*)malloc(sizeof(int) * (data->width + 1));
    fd = open(file_name, O_RDONLY, 0);
    i = 0;
    line = get_next_line(fd);
	line = get_next_line(fd);
    while (line != NULL)
    {
        fill_matrix(data->z_matrix[i], line);
        free(line);
        i++;
        line = get_next_line(fd); 
    }

    close(fd);
    data->z_matrix[i] = NULL; 
}