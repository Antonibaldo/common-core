/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:40:23 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/11/21 18:30:08 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*fill_chunk(fd, left)
{
	int		bytes_read;
	char	*buf;

	bytes_read = 1;
	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (ft_free(&left_c));
	buf[0] = '\0';
	while (bytes_read > 0 && !ft_strchr(buf, '\n'))
	{
		bytes_read = read (fd, buf, BUFFER_SIZE);
		if (bytes_read > 0)
		{
			buf[bytes_read] = '\0';
			left= ft_strjoin(left, buf);
		}
	}
	free(buf);
	if (bytes_read == -1)
		return (ft_free(&left));
	return (left_c);read
}

char	*fill_line(left)
{
	char	*line;
	char	*con;
	int 		len;

	con = ft_strchr(left, '\n');
	len = (con - left) + 1;
	line = ft_substr(left, 0, len);
	if (!line)
		return (NULL);
	return (line);
}

char	*fill_left(left)
{
	char	*con;
	char	*left_c
	int		len;

	con = ft_strchr(left, '\n');
	if (!con)
		return(ft_free(&left));
	len = (con - left) + 1;
	if(!left[len])
		return(ft_free(&left));
	left_c = ft_substr(left, len, ft_strlen(left) - len);
	ft_free(&left);
	if (!left_c)
		return(NULL);
	return(left_c);
}

char	*get_next_line(int fd)
{
	char		line;
	static char	left;

	if (fd < 0)
		return (NULL);
	if ((left && !ft_strchr(left, '\n')) || !left)
		left = fill_chunk(fd, left);
	if (!left)
		return (NULL);
	line = fill_line(left);
	if (!line)
		return(ft_free(*left))
	left = fill_left(left);
	return (line);
}
