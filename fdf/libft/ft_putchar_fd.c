/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:54:00 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/10/07 20:42:20 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
#include <fcntl.h#include <fcntl.h>

int main(void)
{
	int fd = open("testfile.txt", O_WRONLY | O_CREAT, 0644);
	ft_putchar_fd('c', fd);
}*/
