/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 19:03:28 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/10/02 19:50:05 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_tolower(int ch)
{
	if (ch >= 'A' && ch <= 'Z')
	{
		return (ch + ('a' - 'A'));
	}
	return (ch);
}
/*
int main(void)
{
        char str = 'Y';
        char a = ft_tolower(str);
        printf("%c", a);

        return(0);
}*/
