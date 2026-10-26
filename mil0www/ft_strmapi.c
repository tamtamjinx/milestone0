/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 19:27:13 by tlafi             #+#    #+#             */
/*   Updated: 2026/10/26 19:27:14 by tlafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*mapped;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	mapped = malloc(len + 1);
	if (!mapped)
		return (NULL);
	i = 0;
	while (i < len)
	{
		mapped[i] = f((unsigned int)i, s[i]);
		i++;
	}
	mapped[i] = '\0';
	return (mapped);
}
