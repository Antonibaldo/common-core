/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:01:57 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/09/24 18:16:47 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	is_digit(int c)
{
	if (c == '\0')
	{
		return (0);
	}
	if (!(c >= 0  && c <= 127))
		return (0);
	return (1);
}

int main(void)
{
	char c = '1';
	if (is_digit(c))
		printf("%s", "tu madre");
	else
		printf("%s", "tu padre");

	return(0);
}


