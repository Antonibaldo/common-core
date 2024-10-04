/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 08:39:19 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/10/04 10:40:58 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	
	int strlen;
	int i;
	char *substr;

	i = 0;
	strlen = ft_strlen(s);
	substr = malloc(len + 1);
	if (!*s || !substr)
		return (NULL);
	if (strlen <= start)
		substr[i] = '\0';
	if (len > strlen - start)
		len = strlen - start;
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *original = "Hola, mundo!";
    char *resultado;

    resultado = ft_substr(original, 6, 5);
    printf("Subcadena: %s\n", resultado);  // Salida: "mundo"
    free(resultado);

    return 0;
}
*/
