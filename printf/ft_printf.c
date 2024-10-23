/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:31:26 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/10/23 18:28:59 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	format(const char format, va_list args)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (format == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (format == 'p')
		len += ft_putptr(va_arg(args, void *));
	else if (format == 'd' || format == 'i')
		len += ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		len += ft_putnbr_unsig(va_arg(args, unsigned int));
	else if (format == 'x')
		len += ft_puthex(va_arg(args, unsigned int));
	else if (format == 'X')
		len += ft_puthex_cap(va_arg(args, unsigned int));
	else if (format == '%')
		len += ft_putchar('%');
	else
	{
		len += ft_putchar('%');
		len += ft_putchar(format);
	}
	return (len);
}

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int len;
	int i;

	len = 0;
	i = 0;
	va_start(args, str);
	while(str[i] != '\0')
	{
		if (str[i] != '%')
			len += ft_putchar(str[i]);
		else 
		{
			i++;
			if (str[i] != '\0')
				len += format(str[i], args);
			else
				len += ft_putchar('%');
		}
		i++;
	}
	va_end(args);
	return (len);
}
