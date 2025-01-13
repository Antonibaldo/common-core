/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:09:27 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/10/23 17:27:45 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long long num)
{
	int		len;
	char	hex_digit;

	len = 0;
	hex_digit = "0123456789abcdef"[num % 16];
	if (num >= 16)
		len += ft_puthex(num / 16);
	len += ft_putchar(hex_digit);
	return (len);
}
