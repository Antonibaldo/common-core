/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:35:48 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/10/01 17:29:59 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*pd;
	const char	*ps;

	if (!dest || !src)
		return (NULL);
	pd = (char *)dest;
	ps = (const char *)src;
	i = 0;
	if (pd > ps)
	{
		while (n-- > 0)
			pd[n] = ps[n];
	}
	else
	{
		while (i < n)
		{
			pd[i] = ps[i];
			i++;
		}
	}
	return (dest);
}
/*
int main(void)
{
    char str2[] = "endnbobn";
    char str1[3];

    ft_memmove(str1, str2, 5);

    for (int i = 0; i < 8; i++)
    {
        printf("%c", str1[i]);
    }
    printf("\n");

    return 0;
}
*/
