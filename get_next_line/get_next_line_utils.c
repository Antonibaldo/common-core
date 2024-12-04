/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:30:03 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/12/04 19:18:02 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

char    *ft_strchr(const char *s, int c)
{
        int             i;

        i = 0;
        if (!s && !c)
                return (NULL);
        while (s[i])
        {
                if (s[i] == (char)c)
                        return ((char *)s + i);
                i++;
        }
        if (s[i] == (char)c)
                return ((char *)s + i);
        return (NULL);
}

char    *ft_strjoin(char const *s1, char const *s2)
{
        size_t  s1_len;
        size_t  s2_len;
        char    *new_string;
	int	i;
	
        if (s1 == NULL && s2 == NULL)
                return (NULL);
        s1_len = ft_strlen(s1);
        s2_len = ft_strlen(s2);
        new_string = malloc((s1_len + s2_len + 1) * sizeof(char));
        if (new_string == NULL)
                return (NULL);
        //ft_strlcpy(new_string, s1, (s1_len + 1));
        if ((s1_len + 1) > 0)
        {
                i = 0;
                while (i < (s1_len + 1) - 1 && s1[i] != '\0')
                {
                        new_string[i] = s1[i];
                        i++;
                }
		new_string[i] = '\0';
        }
	i = 0;
	while ((s2[i] != '\0') && ((i + s2_len + 1) < (s1_len + s2_len + 1)))
        {
                new_string[i + s2_len] = s2[i];
                i++;
        }
	//ft_strlcat(new_string, s2, (s1_len + s2_len + 1));
        return (new_string);
}

char    *ft_strdup(const char *s)
{
        char    *copy;
        size_t  length;
        size_t  i;

        if (!s)
                return (NULL);
        length = ft_strlen(s);
        copy = malloc(length + 1);
        if (!copy)
                return (NULL);
        i = 0;
        while (i < length)
        {
                copy[i] = s[i];
                i++;
        }
        copy[i] = '\0';
        return (copy);
}

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
        size_t          str_len;
        char            *substr;

        if (s == NULL)
                return (NULL);
        str_len = ft_strlen(s);
        if (start >= str_len)
                return (ft_strdup(""));
        if (len > str_len - start)
                len = str_len - start;
        substr = (char *)malloc(len + 1);
        if (!substr)
                return (NULL);
        ft_strlcpy(substr, s + start, len + 1);
        return (substr);
}

