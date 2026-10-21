#include "libft.h"

void	ft_bzero(void *s, size_t n) //Sets the first n bytes of a memory area to zero.
{
	ft_memset(s, 0, n);
}
