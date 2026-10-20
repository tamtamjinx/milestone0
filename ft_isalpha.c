/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 17:07:24 by tlafi             #+#    #+#             */
/*   Updated: 2026/09/22 17:38:52 by tlafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}//check the second one and what the diff is ++ check the main 
/**int	ft_isalpha(int c)
{
	unsigned char	ch_a;
	unsigned char	ch_z;
	unsigned char	ch_ac;
	unsigned char	ch_zc;

	ch_a = 'a';
	ch_z = 'z';
	ch_ac = 'A';
	ch_zc = 'Z';
	return ((c >= ch_a && c <= ch_z) || (c >= ch_ac && c <= ch_zc));
}
/*#include <stdio.h>
int main(void)
{
	for (int i = 0; i < 256; i++)
		printf("%d: %d\n", i, ft_isalpha(i));
	return (0);
}*/
