/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:22:36 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/09/23 19:19:59 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	is_alpha(int c)
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

int main(void)
{
	char c = 'g';
	if (is_alpha(c))
		printf("%s", "tu madre");
	else
		printf("%s", "tu padre");

	return(0);
}

