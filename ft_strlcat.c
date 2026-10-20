#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    while(dst[j] != '\0' && j<size) //why do we add j<size
{
  j++;
}
while(src[i] != '\0' && j<size){
  dst[j]=src[i];
  j++;
  i++;}
return (j);
}
