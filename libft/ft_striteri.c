/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 15:54:32 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/10/07 20:52:41 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	str_len;
	unsigned int	i;

	if (!s || !f)
		return ;
	str_len = ft_strlen(s);
	i = 0;
	while (i < str_len)
	{
		(*f)(i, s);
		s++;
		i++;
	}
}
/*
void to_uppercase(unsigned int index, char *c)
{
    if (*c >= 'a' && *c <= 'z')
    {
        *c -= 32; 
    }
}

int main(void)
{
    char str[] = "hola mundo";

    printf("Antes: %s\n", str);
    ft_striteri(str, to_uppercase);
    printf("Después: %s\n", str);

    return 0;
}*/
