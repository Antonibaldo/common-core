/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 10:41:23 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/10/04 17:03:05 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *strjoin;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	strjoin = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!strjoin)
		return (NULL);
	while (s1[i])
	{
		strjoin[j] = s1[i];
		j++;
		i++;
	}
	i = 0;
	while (s2[i])
	{
		strjoin[j] = s2[i];
		i++;
		j++;
	}
	strjoin[j] = '\0';
	return (strjoin);

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
