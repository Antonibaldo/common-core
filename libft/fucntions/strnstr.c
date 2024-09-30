/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:06:53 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/09/30 19:17:21 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	if (*little == '\0')
		return (char *)big;
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while (little[j] != '\0' && i + j < len && big[i + j] == little[j])
			j++;
		if (little[j] == '\0')
			return (char *)&big[i];
		i++;
	}
	return NULL;
}

int main(void)
{
	const char *haystack = "Hola Mundo";
    const char *needle = "";

    char *result = ft_strnstr(haystack, needle, 10);

    if (result != NULL) {
        printf("Subcadena encontrada: %s\n", result);
    } else {
        printf("Subcadena no encontrada.\n");
    }
}
