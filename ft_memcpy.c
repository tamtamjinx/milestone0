#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n) //Copies n bytes from one memory area to another, assuming they don't overlap.
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(((unsigned char *) dest) + i) = *(((unsigned char *) src) + i);
		i++;
	}
	return (dest);
}
/*#include <stdio.h>
#include <string.h>

int main() {

    // Initialize a variable
    int a = 20;
    int b = 10;

    printf("Value of b before calling memcpy: %d\n", b);

    // Use memcpy to copy the value of 'a' into 'b'
    ft_memcpy(&b, &a, sizeof(int));

    printf("Value of b after calling memcpy: %d\n", b);

    char str1[] = "rand";
    char str2[6] = "";

    // Copies contents of str1 to str2
    ft_memcpy(str2, str1, 6);

    printf("str2 after memcpy:");
    printf("%s",str2);

    return 0;*/
