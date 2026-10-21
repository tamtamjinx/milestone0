#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n) //Searches the first n bytes of a memory area for a specific byte.
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(((unsigned char *)s) + i) == (unsigned char) c)
			return ((void *)(((unsigned char *) s) + i));
		i++;
	}
	return (NULL);
}
