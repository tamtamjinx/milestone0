/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 17:43:15 by tlafi             #+#    #+#             */
/*   Updated: 2026/09/22 17:45:02 by tlafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//again check the header
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*int	ft_isdigit(int c)
{
	unsigned char	zero;
	unsigned char	nine;

	zero = '0';
	nine = '9';
	return (c >= zero && c <= nine);
}*/
