/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanger <jsanger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 09:14:37 by jsanger           #+#    #+#             */
/*   Updated: 2023/03/29 19:54:27 by jsanger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

// struct für liste erstellen
typedef struct node {
	int			val;
	struct node	*next;
}	t_list;

void	ft_addlst_back(t_list *head, int val)
{
	t_list	*current;

	current = head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = (t_list *) malloc(sizeof(t_list));
	current->next->val = val;
	current->next->next = NULL;
}

void	ft_print_list(t_list *head)
{
	t_list	*current;

	current = head;
	while (current != NULL)
	{
		printf("%d\n", current->val);
		current = current->next;
	}
}

t_list	*ft_lstnew(int num)
{
	t_list	*head;

	head = NULL;
	head = (t_list *) malloc(sizeof(t_list));
	if (head == NULL)
		return (NULL);
	head->val = num;
	head->next = NULL;
	return (head);
}

int	ft_lstsize(t_list *head)
{
	int		i;
	t_list	*current;

	i = 0;
	current = head;
	while (current != NULL)
	{
		i++;
		current = current->next;
	}
	return (i);
}

t_list *ft_lstlast(t_list *head)
{
	t_list	*current;

	while (current != NULL)
	{
		current = current->next;
	}
	current = head;
	return (current);
}

void	ft_lstadd_front(t_list ** head, int val)
{
	t_list	*new_node;

	new_node = (t_list *) malloc(sizeof(t_list));
	new_node->val = val;
	new_node->next = *head;
	*head = new_node;
}

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
}

int	main(void)
{
	t_list	*head;

	head = ft_lstnew(3);
	ft_lstadd_front(&head, 2); // neue node ganz vorne
	ft_lstadd_front(&head, 1); //^^^^^^^^^^^^^^^^^^^^^^
	ft_addlst_back(head, 4); // neue node ganz hinten
	ft_addlst_back(head, 5); // ^^^^^^^^^^^^^^^^^^^^^
	ft_print_list(head); // print list
	printf("size of list = %d\n", ft_lstsize(head)); // print anzahl nodes(größe list)
	return (0);
}
