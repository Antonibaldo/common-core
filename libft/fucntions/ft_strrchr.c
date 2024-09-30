/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 18:05:07 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/09/30 22:29:51 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);

}

char *ft_strrchr(const char *s, int c)
{
    int i;

    i = ft_strlen(s);
    if (!s && !c)
                return (NULL);
        while (i >= 0)
        {
                if (s[i] == (char)c)
                        return ((char *)s + i);
                i--;
        }

    return NULL;
}

int main(void)
{
    char str1[] = "hlolalf";
    char *result;

    result = ft_strrchr(str1, 'l');

    if (result != NULL) {
        printf("Se encontró el carácter: %c\n", *result);
        printf("Subcadena a partir del carácter encontrado: %s\n", result);
    } else {
        printf("No se encontró el carácter.\n");
    }

    return 0;
}
