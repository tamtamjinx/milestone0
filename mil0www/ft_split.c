/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 19:25:44 by tlafi             #+#    #+#             */
/*   Updated: 2026/10/26 19:25:45 by tlafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			count++;
			in_word = 1;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static void	free_words(char **words, int count)
{
	while (count > 0)
		free(words[--count]);
	free(words);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	size_t	start;
	size_t	i;
	int		k;

	if (!s)
		return (NULL);
	words = malloc(sizeof(char *) * ((size_t)count_words(s, c) + 1));
	if (!words)
		return (NULL);
	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
		{
			words[k] = malloc(i - start + 1);
			if (!words[k])
				return (free_words(words, k), NULL);
			ft_memcpy(words[k], s + start, i - start);
			words[k][i - start] = '\0';
			k++;
		}
	}
	words[k] = NULL;
	return (words);
}
