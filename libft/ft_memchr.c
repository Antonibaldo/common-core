/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:49:15 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/10/01 18:25:17 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	char *pd;

	i = 0;
	pd = (char *)s;
	while (i < n)
	{
		if (pd[i] == (char)c)
			return ((void *)s + i);
		i++;
	}
	return NULL;
}
/*
int main() 
{
	char arr[] = "Hola Mundo";
    char *ptr = ft_memchr(arr, 'a', 10);

    if (ptr != NULL) {
        printf("Carácter encontrado: %c\n", *ptr);
    } else {
        printf("Carácter no encontrado.\n");
    }

    return 0;
}*/
