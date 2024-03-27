/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_a_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- < fvieira-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 19:29:31 by fvieira-          #+#    #+#             */
/*   Updated: 2024/03/27 19:29:31 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stack(t_stacks *stacks)
{
	if ((stacks->stack_a->next == NULL))
		return ;
	if (is_stack_sorted(stacks) == 1)
	{
		exit(1);
		return ;
	}
	ft_sort(stacks);
}

void	ft_sort_b_till_3(t_stacks *stacks)
{
	int		i;
	t_stack	*tmp;

	while (count_nodes(stacks->stack_a) > 3 && !is_stack_sorted(stacks))
	{
		tmp = stacks->stack_a;
		i = ft_rotate_type_ab(stacks);
		while (i >= 0)
		{
			if (i == ft_case_rarb(stacks, tmp->number))
				i = ft_apply_rarb(stacks, tmp->number, 'a');
			else if (i == ft_case_rrarrb(stacks, tmp->number))
				i = ft_apply_rrarrb(stacks, tmp->number, 'a');
			else if (i == ft_case_rarrb(stacks, tmp->number))
				i = ft_apply_rarrb(stacks, tmp->number, 'a');
			else if (i == ft_case_rrarb(stacks, tmp->number))
				i = ft_apply_rrarb(stacks, tmp->number, 'a');
			else
				tmp = tmp->next;
		}
	}
}

void	ft_sort_b(t_stacks *stacks)
{
	if (count_nodes(stacks->stack_a) > 3 && !is_stack_sorted(stacks))
		pb(stacks);
	if (count_nodes(stacks->stack_a) > 3 && !is_stack_sorted(stacks))
		pb(stacks);
	if (count_nodes(stacks->stack_a) > 3 && !is_stack_sorted(stacks))
		ft_sort_b_till_3(stacks);
	if (!is_stack_sorted(stacks))
		ft_sort_three(stacks);
}

void	ft_sort_a(t_stacks *stacks)
{
	int		i;
	t_stack	*tmp;

	tmp = stacks->stack_b;
	while (stacks->stack_b)
	{
		tmp = stacks->stack_b;
		i = ft_rotate_type_ba(stacks);
		while (i >= 0)
		{
			if (i == ft_case_rarb_a(stacks, tmp->number))
				i = ft_apply_rarb(stacks, tmp->number, 'b');
			else if (i == ft_case_rarrb_a(stacks, tmp->number))
				i = ft_apply_rarrb(stacks, tmp->number, 'b');
			else if (i == ft_case_rrarrb_a(stacks, tmp->number))
				i = ft_apply_rrarrb(stacks, tmp->number, 'b');
			else if (i == ft_case_rrarb_a(stacks, tmp->number))
				i = ft_apply_rrarb(stacks, tmp->number, 'b');
			else
				tmp = tmp->next;
		}
	}
}

void	ft_sort(t_stacks *stacks)
{
	int	i;

	stacks->stack_b = NULL;
	if (count_nodes(stacks->stack_a) == 2)
		sa(stacks);
	else
	{
		ft_sort_b(stacks);
		ft_sort_a(stacks);
		i = ft_find_index(stacks->stack_a, ft_min(stacks->stack_a));
		if (i < count_nodes(stacks->stack_a) - i)
		{
			while ((stacks->stack_a)->number != ft_min(stacks->stack_a))
				ra(stacks);
		}
		else
		{
			while ((stacks->stack_a)->number != ft_min(stacks->stack_a))
				rra(stacks);
		}
	}
}
