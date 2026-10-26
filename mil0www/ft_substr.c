/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 19:28:26 by tlafi             #+#    #+#             */
/*   Updated: 2026/10/26 19:28:27 by tlafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	size_t	copy_len;
	char	*sub;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if ((size_t)start >= slen)
		return (ft_strdup(""));
	copy_len = slen - start;
	if (copy_len > len)
		copy_len = len;
	sub = malloc(copy_len + 1);
	if (!sub)
		return (NULL);
	ft_memcpy(sub, s + start, copy_len);
	sub[copy_len] = '\0';
	return (sub);
}
