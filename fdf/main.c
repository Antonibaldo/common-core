/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 14:43:57 by abaldo-m          #+#    #+#             */
/*   Updated: 2025/01/16 14:44:37 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int main(int argc, char **argv)
{
    fdf *data;
    int i, j;

    data = (fdf *)malloc(sizeof(fdf));
    if (!data)
        return (1); // Manejo de error en la asignación de memoria

    if (argc == 2)
    {
        read_file(argv[1], data);

        // Imprimir la matriz
        i = 0;
        while (i < data->height)
        {
            j = 0; // Inicializar `j` antes de cada iteración de fila
            while (j < data->width)
            {
                ft_printf("%3d", data->z_matrix[i][j]); // Imprime cada elemento
                j++;
            }
            ft_printf("\n"); // Salto de línea después de cada fila
            i++;
        }

        // Liberar memoria
        i = 0;
        while (i < data->height)
            free(data->z_matrix[i++]); // Liberar cada fila
        free(data->z_matrix);         // Liberar la matriz
        free(data);                   // Liberar la estructura principal
    }
    else
    {
        ft_printf("Error: Invalid number of arguments\n");
        free(data); // Liberar `data` si se asignó
        return (1);
    }

    return (0);
}
