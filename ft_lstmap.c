/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanger <jsanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 10:07:14 by jsanger           #+#    #+#             */
/*   Updated: 2023/04/04 10:37:21 by jsanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	**tail;
	void	*new_data;
	t_list	*new_node;

	result = NULL;
	tail = &result;

	while (lst != NULL)
	{
		new_data = f(lst->content);
		new_node = ft_lstnew(new_data);
		if (new_node == NULL)
		{
			ft_lstclear(&result, del);
			return (NULL);
		}
		*tail = new_node;
		tail = &(new_node->next);
		if (del != NULL)
			del(lst->content);
		lst = lst->next;
	}
	return (result);
}
