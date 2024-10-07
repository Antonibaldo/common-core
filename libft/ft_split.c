/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:51:41 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/10/07 19:40:42 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	ft_free(char **split)
{
	int	i;

	if (!split)
		return ;
	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

static int	ft_count_words(const char *str, char c)
{
	int	i;
	int	count;
	int	in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (str[i])
	{
		if (str[i] == c)
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		i++;
	}
	return (count);
}

static char	**populate_split(char const *s, char c, char **split)
{
	size_t	start;
	size_t	i;
	size_t	j;

	start = 0;
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			split[j] = ft_substr(s, start, i - start + 1);
			if (!split[j])
			{
				ft_free(split);
				return (NULL);
			}
			j++;
		}
		if (s[i] == c && s[i + 1] != c)
			start = i + 1;
		i++;
	}
	split[j] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (!s)
		return (NULL);
	split = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!split)
		return (NULL);
	split = populate_split(s, c, split);
	return (split);
}
/*
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int main(void)
{
    char **result;
    int i;
    char *str = "hola mundo esto es C";
    char delimiter = ' ';
    
    result = ft_split(str, delimiter);
    if (result)
    {
        i = 0;
        while (result[i])
        {
            printf("Subcadena %d: %s\n", i, result[i]);
            i++;
        }
    }
    ft_free(result);

    return 0;
}
*/
