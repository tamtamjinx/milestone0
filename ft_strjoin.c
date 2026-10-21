#include "libft.h"
/*Allocates memory (using malloc(3)) and returns a
new string, which is the result of concatenating
’s1’ and ’s2’.*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;

	// Return NULL if either input string is NULL.
	if (!s1 || !s2)
		return (NULL);

	// Allocate enough memory for both strings and '\0'.
	ptr = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);

	// Return NULL if allocation fails.
	if (ptr == NULL)
		return (NULL);

	// Copy s1 into the beginning of the new string.
	ft_memcpy(ptr, s1, ft_strlen(s1));

	// Copy s2 immediately after s1.
	ft_memcpy(ptr + ft_strlen(s1), s2, ft_strlen(s2));

	// Add the terminating null character.
	ptr[ft_strlen(s1) + ft_strlen(s2)] = '\0';

	// Return the newly allocated joined string.
	return (ptr);
}
