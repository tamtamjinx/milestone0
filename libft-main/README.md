*This project has been created as part of the 42 curriculum by ralkhrai.*

Description

Libft is a C library that re-implements a set of standard C library functions, adds a set of extra utility functions for strings, memory and file descriptors, and provides a small linked list API. The goal of the project is to understand how these functions work internally, handle memory carefully (allocation, freeing, termination of strings, edge cases such as empty strings and a size of zero), and build a reusable library for later 42 projects.

Only malloc, free and write are used from the standard library, as allowed by the subject.

Libc functions

ft_isalpha: returns 1 if the character is a letter (A to Z or a to z), 0 otherwise.

ft_isdigit: returns 1 if the character is a digit (0 to 9), 0 otherwise.

ft_isalnum: returns 1 if the character is a letter or a digit, 0 otherwise.

ft_isascii: returns 1 if the value is in the ASCII range (0 to 127), 0 otherwise.

ft_isprint: returns 1 if the character is printable (32 to 126), 0 otherwise.

ft_strlen: returns the number of characters in a string, not counting the terminating '\0'.

ft_memset: fills the first n bytes of a memory area with a given byte and returns the area.

ft_bzero: sets the first n bytes of a memory area to zero.

ft_memcpy: copies n bytes from a source area to a destination area (the areas must not overlap) and returns the destination.

ft_memmove: copies n bytes from a source area to a destination area and works correctly when the two areas overlap, by choosing the copy direction.

ft_strlcpy: copies a string into a buffer of a given size, copying at most size - 1 characters and always terminating the result with '\0' when the size is not 0. Returns the length of the source string.

ft_strlcat: appends a string to the end of a buffer of a given size, never writing beyond the size and terminating the result with '\0' when there is room. Returns the length it tried to create: the initial length of the destination (at most size) plus the length of the source.

ft_toupper: converts a lowercase letter to uppercase, and returns every other value unchanged.

ft_tolower: converts an uppercase letter to lowercase, and returns every other value unchanged.

ft_strchr: returns a pointer to the first occurrence of a character in a string (the terminating '\0' counts as part of the string), or NULL if it is not found.

ft_strrchr: returns a pointer to the last occurrence of a character in a string, or NULL if it is not found.

ft_strncmp: compares at most n characters of two strings, as unsigned char, and returns the difference of the first differing characters (0 if they are equal).

ft_memchr: returns a pointer to the first occurrence of a byte in the first n bytes of a memory area, or NULL if it is not found.

ft_memcmp: compares the first n bytes of two memory areas, as unsigned char, and returns the difference of the first differing bytes (0 if they are equal).

ft_strnstr: returns a pointer to the first occurrence of a substring in a string, searching at most len characters. Returns the string itself if the substring is empty, and NULL if it is not found.

ft_atoi: converts the beginning of a string to an int, skipping leading whitespace and accepting one optional + or - sign followed by digits.

ft_calloc: allocates memory for nmemb elements of size bytes, sets it all to zero, and returns NULL if the multiplication overflows or the allocation fails.

ft_strdup: returns a newly allocated copy of a string, or NULL if the allocation fails.

Additional functions

ft_substr: returns a newly allocated string taken from a string, starting at index start and at most len characters long. Returns an empty string if start is past the end of the string.

ft_strjoin: returns a newly allocated string that is the concatenation of two strings.

ft_strtrim: returns a newly allocated copy of a string with every character that belongs to a given set removed from the beginning and from the end.

ft_split: splits a string using a delimiter character and returns a newly allocated, NULL-terminated array of newly allocated strings. Consecutive, leading and trailing delimiters produce no empty strings. Returns NULL if any allocation fails, after freeing everything already allocated.

ft_itoa: returns a newly allocated string representing an integer, including negative numbers and INT_MIN.

ft_strmapi: applies a function to each character of a string (passing its index) and returns a newly allocated string made of the results.

ft_striteri: applies a function to each character of a string, passing its index and a pointer to the character so it can be modified in place.

ft_putchar_fd: writes a character to a file descriptor.

ft_putstr_fd: writes a string to a file descriptor.

ft_putendl_fd: writes a string followed by a newline to a file descriptor.

ft_putnbr_fd: writes an integer to a file descriptor, including negative numbers and INT_MIN.

Linked list functions

The list uses the t_list structure, which holds a void pointer named content and a pointer to the next node.

ft_lstnew: creates a new node with the given content and a next pointer set to NULL.

ft_lstadd_front: adds a node at the beginning of the list.

ft_lstsize: returns the number of nodes in the list.

ft_lstlast: returns the last node of the list.

ft_lstadd_back: adds a node at the end of the list.

ft_lstdelone: frees a single node, using a given function to delete its content.

ft_lstclear: deletes and frees a node and every node after it, using a given function to delete the contents, and sets the list pointer to NULL.

ft_lstiter: applies a function to the content of every node of the list.

ft_lstmap: creates a new list by applying a function to the content of every node. If an allocation fails, the new list built so far is cleared and NULL is returned.

Instructions

Every file is compiled with:

cc -Wall -Wextra -Werror

A function that uses another libft function must be compiled together with the file that defines that function, for example:

cc -Wall -Wextra -Werror ft_strdup.c ft_strlen.c main.c

Functions that depend on other libft functions:

ft_bzero: ft_memset.c

ft_calloc: ft_bzero.c, ft_memset.c

ft_isalnum: ft_isalpha.c, ft_isdigit.c

ft_strdup: ft_strlen.c

ft_strjoin: ft_strlen.c, ft_memcpy.c

ft_strlcat: ft_strlen.c

ft_strlcpy: ft_strlen.c

ft_strmapi: ft_strlen.c, ft_strdup.c

ft_strnstr: ft_strlen.c

ft_strrchr: ft_strlen.c

ft_strtrim: ft_strlen.c, ft_strdup.c, ft_memcpy.c

ft_substr: ft_strlen.c, ft_strdup.c

ft_putendl_fd: ft_putstr_fd.c

ft_lstadd_back: ft_lstlast.c, ft_lstadd_front.c

ft_lstclear: ft_lstdelone.c

ft_lstmap: ft_lstnew.c, ft_lstadd_back.c, ft_lstlast.c, ft_lstadd_front.c, ft_lstclear.c, ft_lstdelone.c

All other functions do not use any other libft function and are compiled on their own.

When testing against the standard versions of strlcpy, strlcat and strnstr, which are BSD functions, the test is compiled with the BSD library flag -lbsd and includes bsd/string.h, for example:

cc -Wall -Wextra -Werror ft_strlcpy.c ft_strlen.c main.c -lbsd

Resources

Linux manual pages (man)

GeeksForGeeks: https://www.geeksforgeeks.org/

Makefile Tutorial: https://makefiletutorial.com/

AI was used to write test cases, debugging Makefile, and assisting with this README :P
