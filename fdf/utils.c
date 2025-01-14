/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:28:24 by abaldo-m          #+#    #+#             */
/*   Updated: 2025/01/14 21:02:11 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "fdf.h"

void handle_map(int file)
{
	char *line;
	char **values;
	int fd;
	int i;
	
	fd = open(file, O_RDONLY);
	if (fd < 0) 
	{
		ft_printf("%s\n", "Error opening file");
	    	return;
    	}
    	line = get_next_line(fd);
    	if (!line)
	{
		ft_printf("%s\n", "Map empty");
	    	close(fd);
	    	return;
    	}
	close(fd);
}

int is_number(const char *str)
{
	int i = 0;

    	if (str[i] == '-' || str[i] == '+')
		i++;
    	while (str[i])
    	{
		if (!ft_isdigit(str[i]))
            	return (0);
	    	i++;
    	}
    	if (i == 0 || (i == 1 && (str[0] == '-' || str[0] == '+')))
		return (0);
    	return (1);
}

void check_format(int file)
{
	char *line;
    	char **values;
    	int fd;
    	int i;

    	fd = open(file, O_RDONLY);
    	line = get_next_line(fd);
    	while (line)
    	{
		values = ft_split(line, ' ');
	    	free(line);
	    	i = 0;
	    	while (values[i])
	    	{
			free(values[i]);
			i++;
        	}
        	free(line);
        	free(values);
        	line = get_next_line(fd);
    	}
    	close(fd);
}

