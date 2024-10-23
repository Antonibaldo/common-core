/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:27:55 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/10/23 19:26:00 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_putchar(char c);
int	ft_putnbr(int n);
int	ft_puthex(unsigned long long num);
int	ft_puthex_cap(unsigned long long num);
int	ft_putptr(void *s);
int	ft_putstr(char *str);
int	ft_printf(char const *str, ...);
int	ft_putnbr_unsig(unsigned int n);

#endif
