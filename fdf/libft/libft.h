/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 22:50:09 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/10/14 18:50:35 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H
#  define BUFFER_SIZE 10
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

int				    ft_printf(const char *format, ...);
int		            ft_countwd(char const *str, char c);
char	            *get_next_line(int fd);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_toupper(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
size_t				ft_strlen(const char *str);
unsigned int		ft_strlcpy(char *dest, const char *src, size_t size);
unsigned int		ft_strlcat(char *dest, const char *src, unsigned int size);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_atoi(const char *str);
int					ft_tolower(int c);
void				ft_bzero(void *s, size_t n);
void				*ft_memset(void *b, int c, size_t len);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memcpy(void *dst, const void *src, size_t n);
char				*ft_strnstr(const char *s1, const char *s2, size_t len);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_calloc(size_t count, size_t size);
char				*ft_strdup(const char *s1);
void				ft_putstr_fd(char *s, int fd);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_itoa(int n);
char				**ft_split(char const *s, char c);
#endif
