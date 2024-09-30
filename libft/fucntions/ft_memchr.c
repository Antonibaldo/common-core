/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:49:15 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/09/30 20:13:42 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	int i;
	char *pd;

	i = 0;
	if (!s && !c)
		return (NULL);
	pd = (char *)s;
	while (pd[i])
	{
		if (pd[i] == (char)c)
			return ((char *)pd + i);
		i++;
	}
	return NULL;

}

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
}
