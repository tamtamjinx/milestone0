#include "libft.h"
//malloc	Allocates a block of memory of a specified size and returns a pointer to it, without initializing its contents.
void	*ft_calloc(size_t nmemb, size_t size) //Allocates memory for a specified number of elements and initializes all allocated bytes to zero.
{
	void	*ptr;

	if (nmemb != 0 && size > ((size_t) -1) / nmemb)
		return (NULL);
	if ((nmemb * size) == 0)
		return (malloc(1));
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, size * nmemb);
	return (ptr);
}
