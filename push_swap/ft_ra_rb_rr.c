/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra_rb_rr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- < fvieira-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 19:01:55 by fvieira-          #+#    #+#             */
/*   Updated: 2024/03/27 19:09:46 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra_log(t_stacks *stacks, int log)
{
	t_stack	*keep_stack_a;
	t_stack	*stack;

	keep_stack_a = stacks->stack_a;
	stacks->stack_a = keep_stack_a->next;
	keep_stack_a->next = NULL;
	stack = stacks->stack_a;
	while (stack)
	{
		if (stack->next == NULL)
		{
			stack->next = keep_stack_a;
			break ;
		}
		stack = stack->next;
	}
	if (log == 1)
		write(1, "ra\n", 3);
}

void	rb_log(t_stacks *stacks, int log)
{
	t_stack	*keep_stack_b;
	t_stack	*stack;

	keep_stack_b = stacks->stack_b;
	stacks->stack_b = keep_stack_b->next;
	keep_stack_b->next = NULL;
	stack = stacks->stack_b;
	while (stack)
	{
		if (stack->next == NULL)
		{
			stack->next = keep_stack_b;
			break ;
		}
		stack = stack->next;
	}
	if (log == 1)
		write(1, "rb\n", 3);
}

void	ra(t_stacks *stacks)
{
	ra_log(stacks, 1);
}

void	rb(t_stacks *stacks)
{
	rb_log(stacks, 1);
}

void	rr(t_stacks *stacks)
{
	ra_log(stacks, 0);
	rb_log(stacks, 0);
	write(1, "rr\n", 3);
}
