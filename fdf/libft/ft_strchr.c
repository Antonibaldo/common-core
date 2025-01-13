/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:30:42 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/10/02 21:32:48 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	if (!s && !c)
		return (NULL);
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)s + i);
	return (NULL);
}
/*
int main(void)
{
    char str1[] = "hola";
    char *result;

    result = ft_strchr(str1, 'l');

    if (result != NULL) {
        printf("Se encontró el carácter: %c\n", *result);
    } else {
        printf("No se encontró el carácter.\n");
    }

    return 0;
}
*/
