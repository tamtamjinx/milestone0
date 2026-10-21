#include "libft.h"
/*Outputs the string ’s’ to the specified file
descriptor*/
void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		write(fd, (s + i), 1);
		i++;
	}
}
/*
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s)); // Write the entire string
}
*/
