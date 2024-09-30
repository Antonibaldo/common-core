/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:22:16 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/09/30 19:47:46 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_atoi(const char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while ((*str == ' ') || (*str == '\n') || (*str == '\t') || (*str == '\v')
		|| (*str == '\f') || (*str == '\r'))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str + 1 == '-' || *str + 1 == '+')
			return (0);
		else if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (sign * result);
}

int main(void)
{
	int i = ft_atoi(" -1234ab567");
	printf("%d", i);
	
}

