/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:24:17 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/10/02 21:21:43 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*sa;

	sa = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		sa[i] = 0;
		i++;
	}
}
/*
int main(void)
{
	char str[10];
	ft_bzero(str, 5);
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", str[i]);
	}
    return 0;
}*/
