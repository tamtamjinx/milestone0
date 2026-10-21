/*Allocates memory (using malloc(3)) and returns
a string representing the integer received as an
argument. Negative numbers must be handled.*/

#include "libft.h"

/* Counts the digits and the minus sign if needed */
static int	num_len(long num)
{
	int	len;

	len = 1;
	if (num < 0)
	{
		num *= -1;
		len++;
	}
	while (num >= 10)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	num;
	int		len;
	char	*ptr;

	num = n; // Use long to safely handle INT_MIN
	len = num_len(num); // Get the string length, including '-' if needed
	ptr = malloc(len + 1); // Allocate space for characters and '\0'
	if (!ptr)
		return (NULL); // Stop if allocation fails
	ptr[len] = '\0'; // End the string

	if (num < 0)
		num *= -1; // Work with the positive magnitude

	/* Fill the string from right to left */
	while (len > 0)
	{
		ptr[--len] = num % 10 + '0'; // Convert the last digit to a character
		num /= 10; // Remove the digit we just used
	}
	if (n < 0)
		ptr[0] = '-'; // Add the minus sign
	return (ptr); // Return the allocated string
}
/*
#include "libft.h"

static long	absu(long n)
{
	if (n > 0)
		return (n);
	return (n * -1);
}

static int	num_len(long num)
{
	int	i;

	i = 1;
	if (num < 0)
	{
		num *= -1;
		i++;
	}
	while (num >= 10)
	{
		num /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	num;
	int		sign;
	char	*ptr;
	int		i;

	sign = 0;
	if (n < 0)
		sign = 1;
	num = absu((long) n);
	ptr = malloc(num_len((long) n) + 1);
	if (!ptr)
		return (NULL);
	ptr[num_len(n)] = '\0';
	i = (num_len(n) - 1);
	while (i >= sign)
	{
		ptr[i] = ((num % 10) + '0');
		num /= 10;
		i--;
	}
	if (sign == 1)
		ptr[i] = '-';
	return (ptr);
}*/
