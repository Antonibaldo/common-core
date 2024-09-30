/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:19:26 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/09/30 22:24:50 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include "libft.h"
void* ft_memset(void* ptr, int value, size_t num)
{
	size_t i;
	unsigned char* p;
		
	p = (unsigned char*) ptr;
	i = 0;
	while (i < num)
	{
		p[i] = (unsigned char) value;
		i++;
	}
}

int main(void)
{
	char str[10];
	ft_memset(str, 0, 10);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", str[i]);
	}
    return 0;
}
