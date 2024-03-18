/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_aux_list.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- < fvieira-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:41:45 by fvieira-          #+#    #+#             */
/*   Updated: 2024/02/19 16:42:18 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *create_node(int number)
{
	t_stack *new_node;
	new_node = (t_stack *)malloc(sizeof(t_stack));
	new_node->number = number;
	new_node->next = NULL;

	return new_node;
}

void push_start(t_stack **head, int number)
{
	if (head == NULL)
	{
		ft_printf("Linked list not initialized, error!\n");
		return;
	}

	t_stack *new_node;
	new_node = create_node(number);

	new_node->next = *head;
	*head = new_node;
}

void push_end(t_stack *head, int number)
{
	if (head == NULL)
	{
		ft_printf("Linked list not initialized, error!\n");
		return;
	}

	t_stack *new_node;
	new_node = create_node(number);

	t_stack *aux = head;
	while (aux->next)
	{
		aux = aux->next;
	}

	aux->next = new_node;
}

void print_list(t_stack *head)
{
	t_stack *aux = head;

	while (aux)
	{
		printf("%d\n", aux->number);
		aux = aux->next;
	}
}

t_stack *pop(t_stack **head)
{
	if (head == NULL)
	{
		ft_printf("Linked list not initialized, error!\n");
		return NULL;
	}

    t_stack *removed_node = *head;
    *head = (*head)->next;

    return removed_node;
}