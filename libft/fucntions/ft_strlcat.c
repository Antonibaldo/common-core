/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:25:57 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/09/30 22:26:37 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

unsigned int	ft_size(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	d;
	unsigned int	s;

	i = 0;
	d = ft_size(dest);
	s = ft_size(src);
	if (d >= size)
		return (size + s);
	while ((src[i] != '\0') && ((i + d + 1) < size))
	{
		dest[i + d] = src[i];
		i++;
	}
	dest[i + d] = '\0';
	return (s + d);
}

int main(void)
{
        char str2[]="mundo";
        char str1[]= "hola";
	unsigned int i;
        i = ft_strlcat(str1, str2, 6);
	printf("%d",i);
	return (0);
}
