/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 08:24:54 by bekinci-          #+#    #+#             */
/*   Updated: 2024/10/24 13:22:54 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			words++;
		while (s[i] != '\0' && s[i] != c)
			i++;
	}
	return (words);
}

static void	ft_freemem(char **ptr, int words_size)
{
	int	i;

	i = 0;
	while (i < words_size)
	{
		free(ptr[i]);
		i++;
	}
	free (ptr);
}

static char	**ft_word_copy(char **ptr, char const *s, char c, int word_size)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	start = 0;
	while (i < word_size)
	{
		while (s[j] == c)
			j++;
		start = j;
		while (s[j] != '\0' && s[j] != c)
			j++;
		ptr[i] = ft_substr(s, start, j - start);
		if (!ptr[i])
		{
			ft_freemem(ptr, word_size);
			return (NULL);
		}
		i++;
	}
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	int			word_size;
	char		**ptr;

	word_size = ft_word_count(s, c);
	ptr = (char **)ft_calloc((word_size + 1), sizeof(char *));
	if (!ptr)
		return (NULL);
	ptr = ft_word_copy(ptr, s, c, word_size);
	return (ptr);
}
