/*Iterates through the list ’lst’, applies the
function ’f’ to each node’s content, and creates
a new list resulting of the successive applications
of the function ’f’. The ’del’ function is used to
delete the content of a node if needed.*/
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*new;
	void	*content;

	if (!lst || !f || !del)
		return (NULL); // Stop if any required pointer is NULL
	head = NULL; // Start with an empty new list
	while (lst)
	{
		content = f(lst->content); // Transform the current node's content
		new = ft_lstnew(content); // Create a new node with the transformed content
		if (!new)
		{
			del(content); // Free the transformed content if node creation fails
			ft_lstclear(&head, del); // Free all nodes already created
			return (NULL);
		}
		ft_lstadd_back(&head, new); // Append the new node to the new list
		lst = lst->next; // Move to the next original node
	}
	return (head); // Return the new list
}
