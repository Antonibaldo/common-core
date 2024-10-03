/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 17:36:04 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/10/03 18:23:04 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	unsigned int num;

	num = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		num = (unsigned int)(-n);
	}
	if (num >= 10)
	{
		ft_putnbr_fd(num / 10, fd);
	}
	ft_putchar_fd(num % 10 + '0', fd);
}
/*
#include <fcntl.h>
#include <unistd.h>
int main(void)
{
        int fd = open("test.txt", O_WRONLY);
        ft_putnbr_fd(3, fd);
}*/
