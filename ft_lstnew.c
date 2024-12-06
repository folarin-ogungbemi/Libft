#include "libft.h"
#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list *new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

/*
int	main(void)
{
	char	*data;
	t_list	*node;

	data = "It's a man's World!";
	node = ft_lstnew(data);
	if (!node)
		return (1);
	printf("Content: %s\n", (char *)node->content);
	free(node);
	return (0);
}*/
