/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:08:44 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/10/01 17:29:30 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void *ft_memcpy(void *dest, const void *src, unsigned int n)
{
    unsigned int i;
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;

    i = 0;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return dest;
}
/*
int main(void)
{
    char str2[] = "endnbobn";
    char str1[3];

    ft_memcpy(str1, str2, 5);

    for (int i = 0; i < 5; i++)
    {
        printf("%c", str1[i]);
    }
    printf("\n");

    return 0;
}*/
