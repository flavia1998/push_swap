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

stack_t *create_node(int number)
{
	stack_t *new_node;
	new_node = (stack_t *)malloc(sizeof(stack_t));
	new_node->number = number;
	new_node->next = NULL;

	return new_node;
}

void push_start(stack_t **head, int number)
{
	if (head == NULL)
	{
		ft_printf("Linked list not initialized, error!\n");
		return;
	}

	stack_t *new_node;
	new_node = create_node(number);

	new_node->next = *head;
	*head = new_node;
}

void push_end(stack_t *head, int number)
{
	if (head == NULL)
	{
		ft_printf("Linked list not initialized, error!\n");
		return;
	}

	stack_t *new_node;
	new_node = create_node(number);

	stack_t *aux = head;
	while (aux->next)
	{
		aux = aux->next;
	}

	aux->next = new_node;
}

void print_list(stack_t *head)
{
	stack_t *aux = head;

	while (aux)
	{
		printf("%d\n", aux->number);
		aux = aux->next;
	}
}

stack_t *pop(stack_t **head)
{
	if (head == NULL)
	{
		ft_printf("Linked list not initialized, error!\n");
		return NULL;
	}

    stack_t *removed_node = *head;
    *head = (*head)->next;

    return removed_node;
}