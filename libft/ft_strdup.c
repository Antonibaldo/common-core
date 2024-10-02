/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 23:37:34 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/10/02 21:35:24 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copy;
	size_t	length;
	size_t	i;

	if (!s)
		return (NULL);
	length = ft_strlen(s);
	copy = malloc(length + 1);
	if (!copy)
		return (NULL);
	i = 0;
	while (i < length)
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*
int main(void)
{
    char str[] = "Hsjdnfbjdnbgnbbl";  
    char *copy;                   

    copy = ft_strdup(str);

    printf("Cadena original: %s\n", str);
    printf("Cadena duplicada: %s\n", copy);

    free(copy);

    return 0;
}
*/
