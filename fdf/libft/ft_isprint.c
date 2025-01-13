/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:17:14 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/10/02 19:37:31 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isprint(int c)
{
	if (c == '\0')
	{
		return (0);
	}
	if (!(c >= 32 && c <= 126))
		return (0);
	return (1);
}
/*
int main(void)
{
	char c = '\a';
	if (ft_isprint(c))
		printf("%s", "tu madre");
	else
		printf("%s", "tu padre");

	return(0);
}*/
