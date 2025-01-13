/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 16:40:00 by abaldo-m          #+#    #+#             */
/*   Updated: 2025/01/13 19:52:59 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "fdf.h" 

int	main(int argc, char **argv)
{

	if (argc == 2)
	{
		// 1. leer el archivo .fdf, donde esta el mapa de numeros.
		handle_map(argv[1]);
		// 2. pasar de 3D a 2D las coordenadas guardadas.
		// 3. poner los puntos en la pantalla.
		// 4. programar el algoritmo DDA para conectar los puntos.
		// 5. hacer que se presente todo en una ventana
		// 6. hacer la gestion de los controles.
	 	
	}
	else
		ft_printf("%s\n","Incorrect number of arguments");
	return (0);
}
