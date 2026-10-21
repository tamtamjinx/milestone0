#include "libft.h"
/*Outputs the string ’s’ to the specified file
descriptor followed by a newline.*/
void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd); // Write the string to the given file descriptor
	write(fd, "\n", 1); // Add a newline at the end
}
