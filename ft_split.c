
#include "libft.h"

// Counts how many words are separated by c.
static int	count_words(char const *s, char c)
{
	int	inword;
	int	i;
	int	count;

	count = 0;
	i = 0;
	inword = 0;
	while (s[i])
	{
		// Start of a new word: current char isn't c.
		if (s[i] != c && inword == 0)
		{
			inword = 1;
			count++;
		}
		// End of a word: current char is c.
		if (s[i] == c && inword == 1)
			inword = 0;
		i++;
	}
	return (count);
}

// Copies characters from *i until c or '\0'.
static char	*ft_strdup_uptoc(char const *s, int *i, char c)
{
	int		j;
	char	*newstr;

	// Find the end of this word to calculate its length.
	j = *i;
	while (s[j] && s[j] != c)
		j++;

	// Allocate enough space for the word and '\0'.
	newstr = malloc(sizeof(char) * (j - *i + 1));
	if (!newstr)
		return (NULL);

	// Copy the word and advance *i through the source string.
	j = 0;
	while (s[*i] && s[*i] != c)
	{
		newstr[j] = s[*i];
		(*i)++;
		j++;
	}
	// Terminate the copied word.
	newstr[j] = '\0';
	return (newstr);
}

// Frees the first ptrsc words and the array itself.
static void	ft_clear(char ***strs, int ptrsc)
{
	int	i;

	i = 0;
	while (i < ptrsc)
	{
		free((*strs)[i]);
		i++;
	}
	free(*strs);
}

// Fills the array with words and adds the final NULL pointer.
static char	**corelogic(char const *s, char c, int words, char ***strs)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		// Skip separator characters.
		if (s[i] == c)
			i++;
		else
		{
			// Allocate and copy the next word.
			(*strs)[j] = ft_strdup_uptoc(s, &i, c);
			if (!(*strs)[j])
			{
				// If allocation fails, free words already created.
				ft_clear(strs, j);
				return (NULL);
			}
			j++;
		}
	}
	// Mark the end of the array with NULL.
	(*strs)[words] = NULL;
	return (*strs);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		words;

	// A NULL input string cannot be split.
	if (!s)
		return (NULL);

	// Count words so the pointer array has the correct size.
	words = count_words(s, c);
	if (words > 0)
		strs = malloc(sizeof(char *) * (words + 1));
	else
	{
		// Even with no words, return an array containing NULL.
		strs = malloc(sizeof(char *) * 1);
		if (!strs)
			return (NULL);
		strs[0] = NULL;
		return (strs);
	}
	if (!strs)
		return (NULL);

	// Fill the array with the copied words.
	return (corelogic(s, c, words, &strs));
}
