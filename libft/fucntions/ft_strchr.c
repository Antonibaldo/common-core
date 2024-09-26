/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:30:42 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/09/26 18:13:49 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    if (!s && !c)
		return (NULL);
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
    
    return NULL;
}

int main(void)
{
    char str1[] = "hola";
    char *result;

    result = ft_strchr(str1, 'l');

    if (result != NULL) {
        printf("Se encontró el carácter: %c\n", *result);
        printf("Subcadena a partir del carácter encontrado: %s\n", result);
    } else {
        printf("No se encontró el carácter.\n");
    }

    return 0;
}

