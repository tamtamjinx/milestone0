#include "libft.h"

void	*ft_memset(void *s, int c, size_t n) //Fills the first n bytes of a memory area with a specified byte value.
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(((unsigned char *)s) + i) = (unsigned char)c;
		i++;
	}
	return (s);
}

/*#include <stdio.h>
#include <string.h>

int main()
{
    char str[10] = "0123456789";
    char str2[10] = "0123456789";
    int n = 0;
    int size = 15;
   // printf("\nBefore memset(): %s\n", str);
   // memset(str + n, '.', size*sizeof(char));
   // printf("After memset():  %s", str);

    printf("\nMINE Before memset(): %ld\n", (str2 - str));
    //ft_memset(str2 + n, '.', size*sizeof(char));
    //printf("After memset():  %s", str2);
    return 0;
}*/
