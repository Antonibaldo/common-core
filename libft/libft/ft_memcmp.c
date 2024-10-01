/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 20:29:35 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/10/01 17:29:01 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
int ft_memcmp(const void *str1, const void *str2, size_t n)
{
	int	i;
	int	r;
	char	*pd;
	char	*ps;

	i = 0;
	if (!str1 && !str2)
		return (0);
	pd = (char *)str1;
	ps = (char *)str2;
	while (i <= n || pd[i] || ps[i])
	{
		if (pd[i] == ps[i])
		{
			i++;
		}
		else
		{
			r = pd[i] - ps[i];
			return (r);
		}
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
