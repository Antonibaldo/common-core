/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 19:02:55 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/10/02 21:37:02 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_toupper(int ch)
{
	if (ch >= 'a' && ch <= 'z')
	{
		return (ch - ('a' - 'A'));
	}
	return (ch);
}
/*
int main(void)
{
        char str = 'G';
        char a = ft_toupper(str);
        printf("%c", a);

        return(0);
}*/
