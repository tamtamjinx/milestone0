
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len) //Allocates memory (using malloc(3)) and returns a substring from the string ’s’. The substring starts at index ’start’ and has a maximum length of ’len’.
{
	size_t			s_len;
	size_t			i;
	char			*ptr;

	// Return NULL if the source string is NULL.
	if (!s)
		return (NULL);

	// Calculate the length of the original string.
	s_len = ft_strlen(s);

	// If start is outside the string, return an allocated empty string.
	if (start >= s_len)
		return (ft_strdup(""));

	// Don't copy more characters than remain after start.
	if (len > s_len - start)
		len = s_len - start;

	// Allocate enough memory for len characters plus '\0'.
	ptr = (char *)malloc(sizeof(char) * (len + 1));

	// Return NULL if memory allocation fails.
	if (ptr == NULL)
		return (NULL);

	// Copy characters from s, beginning at index start.
	i = 0;
	while (i < len)
	{
		ptr[i] = s[start + i];
		i++;
	}

	// Terminate the new string.
	ptr[i] = '\0';

	// Return the newly allocated substring.
	return (ptr);
}
