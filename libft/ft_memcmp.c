/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 20:29:35 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/10/02 19:06:54 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
int ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	i;
	unsigned char	*pd;
	unsigned char	*ps;

	i = 0;
	pd = (unsigned char *)str1;
	ps = (unsigned char *)str2;
	while (i < n)
	{
		if (!(pd[i] == ps[i]))
			return(pd[i] - ps[i]);
		i++;
	}
	return (0);
}
/*
int main(void)
{
	char	s1[]= "wew";
	char	s2[]= "wew";
	int i;
	i = ft_memcmp(s1, s2, 3);
	printf("%i", i);
	return(0);
}
*/
