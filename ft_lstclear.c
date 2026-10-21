
#include "libft.h"
/*Deletes and frees the given node and all its
successors, using the function ’del’ and free(3).
Finally, set the pointer to the list to NULL.*/
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*temp2;

	if (!lst || !del)
		return ; // Stop if the list pointer or delete function is NULL
	temp = *lst; // Start at the first node
	while (temp)
	{
		temp2 = temp->next; // Save the next node before freeing the current one
		ft_lstdelone(temp, del); // Delete the current node and its content
		temp = temp2; // Move to the next node
	}
	*lst = NULL; // Mark the list as empty
}
