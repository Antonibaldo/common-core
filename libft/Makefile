# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/01 17:38:19 by abaldo-m          #+#    #+#              #
#    Updated: 2024/10/07 20:06:17 by abaldo-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Las Flags para compilar
	FLAG = -Wall -Wextra -Werror
# El nombre del "Programa"
	NAME = libft.a
# Los Archivos "librerias" .c
	SRC = ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strncmp.c \
		ft_atoi.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memmove.c \
		ft_memcpy.c \
		ft_strnstr.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_itoa.c \
		ft_split.c \

# Los Archivos "librerias" .o
OBJ = ${SRC:.c=.o}

# Se refiere a lo ejecutable
all: ${NAME}
# Creo el "Programa" a partir de los archivos .o
${NAME}: ${OBJ}
	@ar rcs ${NAME} ${OBJ}
	@echo "${NAME} created and indexed"
# Creo los archivos .o
%.o: %.c
	@gcc ${FLAG} -c $< -o $@
# Borra los archivos .o
clean:
	@rm -f ${OBJ}
	@echo "OBJ cleaned"
# Borra los archivos .o y el "Programa"
fclean: clean
	@rm -f ${OBJ}
	@rm -f ${NAME}
	@echo "All objects and executable cleaned"
# Borra el "Programa" y recompila
re: fclean all

# Indica a Make que no son archivos reales, sino nombres de objetivos, Esto evita conflictos si existieran archivos con esos mismos nombres.
.PHONY:	all clean fclean re bonus
