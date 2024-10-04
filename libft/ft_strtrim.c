/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 11:07:26 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/10/04 12:21:48 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int is_in_set(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}
char *ft_strtrim(char const *s1, char const *set)
{
	char *str;
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	j = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && is_in_set(s1[i], set))
		i++;
	while (j > i && is_in_set(s1[j - 1], set))
		j--;
	str = (char *)malloc(j - i + 1);
	if (!str)
		return (NULL);
	while (i < j)
	{
		str[k] = s1[i];
		k++;
		i++;
	}
	str[k] = '\0';
	return(str);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *s1 = "sseeHolaseseses";
    char *set = "es";
    char *resultado;

    resultado = ft_strtrim(s1, set);
    printf("Subcadena: %s\n", resultado);
    free(resultado);

    return 0;
}*/
