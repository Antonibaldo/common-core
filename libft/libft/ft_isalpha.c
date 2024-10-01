/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:22:36 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/10/01 17:26:02 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalpha(int c)
{
	if (c == '\0')
	{
		return (0);
	}
	if (!((c >= 'A' && c <= 'Z')
			|| (c >= 'a' && c <= 'z')))
	{
		return (0);
	}
	return (1);
}
/*
int main(void)
{
	char c = 'g';
	if (ft_isalpha(c))
		printf("%s", "tu madre");
	else
		printf("%s", "tu padre");

	return(0);
}
*/
