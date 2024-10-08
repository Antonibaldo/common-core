/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 19:14:21 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/10/08 13:04:29 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	ft_fillnum(char *str, unsigned int num, int length, int n)
{
	if (n == 0)
	{
		str[0] = '0';
		return ;
	}
	while (num > 0)
	{
		str[--length] = (num % 10) + '0';
		num /= 10;
	}
}

static int	is_neg(int num)
{
	return (num < 0);
}

static int	ft_itoalen(int num)
{
	int	lenght;
	int	n;

	n = num;
	lenght = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		lenght++;
	}
	if (is_neg (num))
		lenght ++;
	return (lenght);
}

char	*ft_itoa(int n)
{
	unsigned int	num;
	int				length;
	char			*str;

	length = ft_itoalen(n);
	str = (char *)malloc(length + 1);
	if (!str)
		return (NULL);
	str[length] = '\0';
	if (is_neg(n))
		num = -n;
	else
		num = n;
	ft_fillnum(str, num, length, n);
	if (is_neg(n))
		str[0] = '-';
	return (str);
}
/*
int	main(void)
{
	int n = -1234;
	char *num;

	num = ft_itoa(n);
	printf("El número convertido es: %s\n", num);
	free(num);
}
*/
