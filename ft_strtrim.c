
#include "libft.h"

// Returns 1 if c exists in set, otherwise returns 0.
static int	in_set(char const c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i; // CHANGED: use size_t for string indexes.
	size_t	j; // CHANGED: use size_t instead of long.
	char	*ptr;

	if (!s1 || !set)
		return (NULL);

	// CHANGED: handle an empty string before subtracting 1.
	if (s1[0] == '\0')
		return (ft_strdup(""));

	j = ft_strlen(s1) - 1;
	i = 0;

	// Skip characters from set at the beginning.
	while (s1[i] && in_set(s1[i], set))
		i++;

	// CHANGED: if every character was trimmed, return an empty string.
	if (s1[i] == '\0')
		return (ft_strdup(""));

	// CHANGED: check j > i BEFORE accessing s1[j].
	// This prevents the index from moving before the trimmed content.
	while (j > i && in_set(s1[j], set))
		j--;

	// Allocate space for the remaining characters and '\0'.
	ptr = malloc(j - i + 2);
	if (ptr == NULL)
		return (NULL);

	// Copy the substring from index i through index j.
	ft_memcpy(ptr, s1 + i, j - i + 1);

	// CHANGED: no need to assign ft_memcpy's return value to ptr.
	ptr[j - i + 1] = '\0';

	return (ptr);
}
/*#include "libft.h"

static int	in_set(char const c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	long	j;
	char	*ptr;

	if (!s1 || !set)
		return (NULL);
	j = ft_strlen(s1) - 1;
	i = 0;
	while (in_set(s1[i], set) && s1[i])
		i++;
	if (i == ft_strlen(s1))
		return (ft_strdup(""));
	while (in_set(s1[j], set) && j >= 0)
		j--;
	ptr = malloc (j - i + 2);
	if (ptr == NULL)
		return (NULL);
	ptr = (char *)ft_memcpy(ptr, s1 + i, j - i + 1);
	ptr[j - i + 1] = '\0';
	return (ptr);
}*/
