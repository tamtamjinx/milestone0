/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 16:11:04 by tlafi             #+#    #+#             */
/*   Updated: 2026/09/23 16:15:47 by tlafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h" // tells the compiler to import your custom header file, which contains the declarations (prototypes) for your Libft functions. 
//check if u have a header in here its not important cuz i didnt call anyfunction and read more about it
int	ft_isalnum(int c) // is supposed to check if a character is either a letter (A-Z, a-z) or a digit (0-9).
{
	if ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


/**int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}*//
