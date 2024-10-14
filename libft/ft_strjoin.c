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

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*new_string;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new_string = malloc((s1_len + s2_len + 1) * sizeof(char));
	if (new_string == NULL)
		return (NULL);
	ft_strlcpy(new_string, s1, (s1_len + 1));
	ft_strlcat(new_string, s2, (s1_len + s2_len + 1));
	return (new_string);
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
