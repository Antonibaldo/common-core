/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:28:24 by abaldo-m          #+#    #+#             */
/*   Updated: 2025/01/13 19:46:22 by abaldo-m         ###   ########.fr       */
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
    if (fd < 0) {
        ft_printf("%s\n", "Error opening file");
        return;
    }
    line = get_next_line(fd);
    if (!line) {
        ft_printf("%s\n", "Map empty");
        close(fd);
        return;
    }
    while (line)
    {
        values = ft_split(line, ' ');
        i = 0;
        while (values[i]) {
            free(values[i]);
            i++;
        }
        free(line);
        free(values);
        line = get_next_line(fd);
    }
    close(fd);
}

