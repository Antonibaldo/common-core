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

int deal_key(int key, void *data)
{
    ft_printf("%d", key);
    return(0);
}

int main(int argc, char **argv)
{
    fdf *data;

    data = (fdf *)malloc(sizeof(fdf));
    read_file(argv[1], data);
    
    int i;
    int j;

    i = 0;
    while (i < data->height)
    {
        j = 0; 
        while (j < data->width)
        {
            printf("%d ", data->z_matrix[i][j]); 
            j++;
        }
        ft_printf("\n");
        i++;
    }
}
