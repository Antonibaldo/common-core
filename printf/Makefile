# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/22 17:19:11 by abaldo-m          #+#    #+#              #
#    Updated: 2024/10/23 18:25:01 by abaldo-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Las Flags para compilar
        FLAG = -Wall -Wextra -Werror
# El nombre del "Programa"
        NAME = libftprintf.a
# Los Archivos "librerias" .c
        SRC = ft_putchar.c ft_putstr.c ft_putnbr.c ft_putnbr_unsig.c ft_puthex.c ft_puthex_cap.c ft_putptr.c ft_printf.c

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
.PHONY: all clean fclean re bonus
