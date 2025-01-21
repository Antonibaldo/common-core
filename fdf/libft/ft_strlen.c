/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:31:59 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/10/02 19:57:21 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
size_t ft_strlen(const char *str)
{
    size_t len = 0;

    if (!str)
        return (0);

    while (str[len])
        len++;
    return (len);
}

/*
int main(void)
{
	char str[] = "Hola, muhrtgjndo!";
	int a = ft_strlen(str);
	printf("%d", a);

	return(0);
}
*/
