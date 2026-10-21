
#include "libft.h"
/*Outputs the integer ’n’ to the specified file
descriptor*/
/* Prints the digits from left to right using recursion */
static void	ft_long_putnbr_fd(long num, int fd)
{
	char	c;

	if (num == 0)
		return ; // Stop when there are no more digits
	c = (num % 10) + '0'; // Convert the last digit to a character
	ft_long_putnbr_fd(num / 10, fd); // Print the preceding digits first
	write(fd, &c, 1); // Print this digit after the preceding digits
}

void	ft_putnbr_fd(int n, int fd)
{
	long	num;

	num = n; // Use long to safely handle INT_MIN
	if (num == 0)
	{
		write(fd, "0", 1); // Handle zero separately
		return ;
	}
	if (num < 0)
	{
		num *= -1; // Convert to a positive magnitude
		write(fd, "-", 1); // Print the minus sign first
	}
	ft_long_putnbr_fd(num, fd); // Print the number's digits
}
