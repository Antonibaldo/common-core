/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 23:14:51 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/10/02 21:26:28 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
/*
int main(void)
{
    int *arr;
    size_t num_elements = 10;

    arr = (int *)ft_calloc(num_elements, sizeof(int));

    printf("Valores inicializados por ft_calloc:\n");
    for (size_t i = 0; i < num_elements; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return (0);
}*/
