#include "libft.h"

/*char	num(unsigned int i, char c)
{
	char chr = '.';
	if (c != '.' && i > 9)
		chr = '0';
	else if (c != '.' && i <= 9)
		chr = i + '0';
	return (chr);
}*/
/*Applies the function f to each character of the
string s, passing its index as the first argument
and the character itself as the second. A new
string is created (using malloc(3)) to store the
results from the successive applications of f.*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			len_s;
	char			*ptr;

	if (!s || !f)
		return (NULL); // Invalid input
	len_s = ft_strlen(s); // Get the original string length
	if (len_s == 0)
		return (ft_strdup("")); // Return an allocated empty string
	ptr = malloc(len_s + 1); // Space for characters plus '\0'
	if (!ptr)
		return (NULL); // Stop if allocation fails
	i = 0;
	while (s[i])
	{
		ptr[i] = f(i, s[i]); // Transform each character
		i++;
	}
	ptr[i] = '\0'; // Terminate the new string
	return (ptr); // Return the new string
}
