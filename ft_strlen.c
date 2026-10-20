/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:48:37 by tlafi             #+#    #+#             */
/*   Updated: 2026/10/19 15:50:14 by tlafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i; //read about it ++ used cz i need to retun size_t

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
/*#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*#include <stdio.h>
int main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	int i = 1;
	while (i < argc)
	{
		printf("%s %zu\n", argv[i], ft_strlen(argv[i]));
		i++;
	}
	return (0);*/
