/*Allocates memory (using malloc(3)) and returns
a new node. The ’content’ member variable is
initialized with the given parameter ’content’.
The variable ’next’ is initialized to NULL.*/
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(*node)); // Allocate memory for one node
	if (!node)
		return (NULL); // Return NULL if allocation fails
	node->content = content; // Store the content pointer
	node->next = NULL; // The node doesn't point to another node yet
	return (node); // Return the newly created node
}
