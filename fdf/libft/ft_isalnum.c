/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:43:24 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/10/02 21:22:26 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int c)
{
	if (c == '\0')
	{
		return (0);
	}
	if (!((c >= 'A' && c <= 'Z')
			|| (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')))
		return (0);
	return (1);
}
/*
int main(void)
{
	char c = '-';
	if (ft_isalnum(c))
		printf("%s", "tu madre");
	else
		printf("%s", "tu padre");

	return(0);
}*/
