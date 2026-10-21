#include "libft.h"
/*Outputs the character ’c’ to the specified file
descriptor*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1); // Write one character to the given file descriptor
  /*fd: Where to write. 1 is standard output, 2 is standard error, and 0 is standard input.
&c: The memory address of the character to write.
1: The number of bytes to write.*/
}
