/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 10:41:23 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/10/14 18:42:04 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *result;
    size_t len1;
    size_t len2;

    if (!s1 || !s2) // Verifica que los punteros no sean NULL
        return NULL;

    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);
    result = malloc(len1 + len2 + 1);
    if (!result)
        return NULL;

    ft_memcpy(result, s1, len1);
    ft_memcpy(result + len1, s2, len2);
    result[len1 + len2] = '\0';
    return result;
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *s1 = "Hola";
    char *s2 = " mundo";
    char *resultado;

    resultado = ft_strjoin(s1, s2);
    printf("Subcadena: %s\n", resultado);
    free(resultado);

    return 0;
}
*/
