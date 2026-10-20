#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
    size_t i;
    char *hold;

    i = 0;
    hold = NULL;
    while(s[i])
    {
      if(s[i] == (char)c)
      {
        hold = (char *)&s[i];
      }
      i++;
    }
    if((char)c =='\0'){
    return((char *)&s[i]);
    }
    return(hold);
}

/*///****#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s) + 1;
	while (i > 0)
	{
		i--;
		if (s[i] == (char) c)
			return ((char *)s + i);
	}
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>

int main()
{
    // initializing string
    char *str = "tripouille";

    // character to be searched
    char chr = 't';

    // Storing pointer returned by
    char* ptr =ft_strrchr(str, chr + 256);

    // getting the position of the character
    if (ptr) {
        printf("Last occurrence of %c in %s is at index %ld",
               chr, str, ptr - str);
    }
    // condition for character not present
    else {
        printf("%c is not present in %s ", chr, str);
    }*/
    return 0;
