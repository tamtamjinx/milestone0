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

static size_t	ft_count_words(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static	char	**ft_free(char **ssplit, size_t j)
{
	while (j > 0)
		free(ssplit[--j]);
	free(ssplit);
	return (NULL);
}

static size_t	ft_word_length(const char *s, char c, size_t i)
{
	size_t	len;

	len = 0;
	while (s[i + len] != '\0' && s[i + len] != c)
		len++;
	return (len);
}

static	char	**ft_fill(char **ssplit, const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	length;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			length = ft_word_length(s, c, i);
			ssplit[j] = ft_substr(s, i, length);
			if (!ssplit[j])
				return (ft_free(ssplit, j));
			j++;
			i += length;
		}
		else
			i++;
	}
	ssplit[j] = 0;
	return (ssplit);
}

char	**ft_split(char const *s, char c)
{
	char	**ssplit;

	if (!s)
		return (NULL);
	ssplit = (char **)malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!ssplit)
		return (NULL);
	return (ft_fill(ssplit, s, c));
}
/*
int     main()
{
        char **s3=ft_split("hello,world,hi!",',');
        printf("%s",s3[0]);
        printf("%s",s3[1]);
        printf("%s",s3[2]);
        printf("%s",s3[3]);
        free(s3);
}*/
