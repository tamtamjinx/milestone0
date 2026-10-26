/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 19:21:55 by tlafi             #+#    #+#             */
/*   Updated: 2026/10/26 19:21:56 by tlafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_len(long n)
{
	int	len;

	len = 1;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n >= 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	num;
	int		len;
	char	*str;

	num = n;
	len = num_len(num);
	str = malloc((size_t)len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (num < 0)
		num = -num;
	while (len > 0)
	{
		str[--len] = (char)(num % 10 + '0');
		num /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
