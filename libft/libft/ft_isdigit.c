/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 19:29:44 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/10/01 17:27:10 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
int	ft_isdigit(int c)
{
	if (c == '\0')
	{
		return (0);
	}
	if (!(c >= '0' && c <= '9'))
		return (0);
	return (1);
}
/*
int main(void)
{
	char c = '0';
	if (ft_isdigit(c))
		printf("%s", "tu madre");
	else
		printf("%s", "tu padre");

	return(0);
}*/
