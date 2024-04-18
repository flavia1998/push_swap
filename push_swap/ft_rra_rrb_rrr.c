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
	t_stack	*tmp;
	int		i;

	if (!stacks->stack_a || !stacks->stack_a->next)
		return ;
	i = 0;
	tmp = stacks->stack_a;
	while (stacks->stack_a->next)
	{
		stacks->stack_a = stacks->stack_a->next;
		i++;
	}
	stacks->stack_a->next = tmp;
	while (i > 1)
	{
		tmp = tmp->next;
		i--;
	}
	tmp->next = NULL;
	if (log == 1)
		write(1, "rra\n", 4);
}

void	rrb_log(t_stacks *stacks, int log)
{
	t_stack	*tmp;
	int		i;

	if (!stacks->stack_b || !stacks->stack_b->next)
		return ;
	i = 0;
	tmp = stacks->stack_b;
	while (stacks->stack_b->next)
	{
		i++;
		stacks->stack_b = stacks->stack_b->next;
	}
	stacks->stack_b->next = tmp;
	while (i > 1)
	{
		tmp = tmp->next;
		i--;
	}
	tmp->next = NULL;
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