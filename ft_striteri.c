/*Applies the function ’f’ to each character of the
string passed as argument, passing its index as
the first argument. Each character is passed by
address to ’f’ so it can be modified if necessary*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ; // Do nothing if either argument is NULL
	i = 0;
	while (s[i])
	{
		f(i, (s + i)); // Apply f to the character at index i
		i++; // Move to the next character
	}
}
