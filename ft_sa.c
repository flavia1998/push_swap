/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- < fvieira-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 19:14:02 by fvieira-          #+#    #+#             */
/*   Updated: 2024/03/27 19:51:57 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_first_two(t_stack **head)
{
	t_stack	*first;
	t_stack	*second;
	t_stack	*third;

	if (*head == NULL || (*head)->next == NULL)
		return ;
	first = *head;
	second = (*head)->next;
	third = second->next;
	first->next = third;
	second->next = first;
	if (!third)
	{
		first->next = NULL;
	}
	*head = second;
}

void	sa_log(t_stacks *stacks, int log)
{
	swap_first_two(&stacks->stack_a);
	if (log == 1)
		write(1, "sa\n", 3);
}

void	sa(t_stacks *stacks)
{
	sa_log(stacks, 1);
}

void	ss(t_stacks *stacks)
{
	sa_log(stacks, 0);
	sb_log(stacks, 0);
	write(1, "ss\n", 3);
}
