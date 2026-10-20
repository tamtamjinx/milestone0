/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:54:40 by tlafi             #+#    #+#             */
/*   Updated: 2026/10/19 16:28:58 by tlafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c) //function searches for the first occurrence of a specific character
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c) //The variable c is passed into the function as an int
		{
			return ((char *)&s[i]); //check last line
		}
		i++;
	}
	if ((char)c == '\0')
	{
		return ((char *)&s[i]);
	}
	return (NULL);
}
/*1. s[i] is a single character.
2. &s[i] means "give me the memory address of this character" (which creates a pointer).
3. Because the input parameter is defined as const char *s, the pointer &s[i] naturally inherits that protection.
Its type is implicitly const char * (meaning you are not allowed to modify the string it points to).
The function signature dictates that ft_strchr must return a regular char * (a pointer that is allowed to modify things).
C does not allow you to implicitly drop a const protection because it is unsafe. 
If you try to return &s[i] directly, the compiler will throw a warning/error saying: "You are trying to return a const pointer as a non-const pointer!"
The Fix:
By adding (char *) in front of it, you are performing a forceful typecast. You are telling the compiler: "I know this string was originally passed in as read-only*/ (const), but I need to return it as a modifiable pointer (char *) to match the standard function definition. Trust me, strip the const tag away."
/*#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != (char) c)
		i++;
	if ((char) c != s[i])
		return (NULL);
	return ((char *) s + i);
/*#include <stdio.h>
#include <string.h>

int main() { //check the main
    char str[] = "GeeksforGeeks";
	char *us;
	char *ptr = ft_strchr(us, '\0');
    if (ptr != NULL)
        printf("Character found at position: %ld\n", ptr - str);
    else
        printf("Character not found\n");

    return 0;}*/
