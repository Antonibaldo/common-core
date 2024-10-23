/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_cap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:24:25 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/10/23 17:27:01 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_puthex_cap(unsigned long long num)
{
        int             len;
        char    hex_digit;

        len = 0;
        hex_digit = "0123456789ABCDEF"[num % 16];
        if (num >= 16)
                len += ft_puthex_cap(num / 16);
        len += ft_putchar(hex_digit);
        return (len);
}
