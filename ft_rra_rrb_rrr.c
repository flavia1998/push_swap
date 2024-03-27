/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra_rrb_rrr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- < fvieira-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 20:13:21 by fvieira-          #+#    #+#             */
/*   Updated: 2024/03/27 20:14:51 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra_log(t_stacks *stacks, int log)
{
	t_stack	*last_element;
	t_stack	*before_last_element;

	last_element = stacks->stack_a;
	while (last_element->next)
	{
		last_element = last_element->next;
		if (last_element->next != NULL)
			before_last_element = last_element;
	}
	last_element->next = stacks->stack_a;
	stacks->stack_a = last_element;
	before_last_element->next = NULL;
	if (log == 1)
		write(1, "rra\n", 4);
}

void	rrb_log(t_stacks *stacks, int log)
{
	t_stack	*last_element;
	t_stack	*before_last_element;

	last_element = stacks->stack_b;
	while (last_element->next)
	{
		last_element = last_element->next;
		if (last_element->next != NULL)
			before_last_element = last_element;
	}
	last_element->next = stacks->stack_b;
	stacks->stack_b = last_element;
	before_last_element->next = NULL;
	if (log == 1)
		write(1, "rrb\n", 4);
}

void	rra(t_stacks *stacks)
{
	rra_log(stacks, 1);
}

void	rrb(t_stacks *stacks)
{
	rrb_log(stacks, 1);
}

void	rrr(t_stacks *stacks)
{
	rra_log(stacks, 0);
	rrb_log(stacks, 0);
	write(1, "rrr\n", 4);
}
