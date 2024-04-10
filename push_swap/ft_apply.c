/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- < fvieira-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 18:46:07 by fvieira-          #+#    #+#             */
/*   Updated: 2024/03/27 18:47:07 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_apply_rarb(t_stacks *stacks, int c, char s)
{
	if (s == 'a')
	{
		while (stacks->stack_a->number != c && ft_find_place_b(stacks, c) > 0)
			rr(stacks);
		while (stacks->stack_a->number != c)
			ra(stacks);
		while (ft_find_place_b(stacks, c) > 0)
			rb(stacks);
		pb(stacks);
	}
	else
	{
		while (stacks->stack_b->number != c && ft_find_place_a(stacks, c) > 0)
			rr(stacks);
		while (stacks->stack_b->number != c)
			rb(stacks);
		while (ft_find_place_a(stacks, c) > 0)
			ra(stacks);
		pa(stacks);
	}
	return (-1);
}

int	ft_apply_rrarrb(t_stacks *stacks, int c, char s)
{
	if (s == 'a')
	{
		while (stacks->stack_a->number != c && ft_find_place_b(stacks, c) > 0)
			rrr(stacks);
		while (stacks->stack_a->number != c)
			rra(stacks);
		while (ft_find_place_b(stacks, c) > 0)
			rrb(stacks);
		pb(stacks);
	}
	else
	{
		while (stacks->stack_b->number != c && ft_find_place_a(stacks, c) > 0)
			rrr(stacks);
		while (stacks->stack_b->number != c)
			rrb(stacks);
		while (ft_find_place_a(stacks, c) > 0)
			rra(stacks);
		pa(stacks);
	}
	return (-1);
}

int	ft_apply_rrarb(t_stacks *stacks, int c, char s)
{
	if (s == 'a')
	{
		while (stacks->stack_a->number != c)
			rra(stacks);
		while (ft_find_place_b(stacks, c) > 0)
			rb(stacks);
		pb(stacks);
	}
	else
	{
		while (ft_find_place_a(stacks, c) > 0)
			rra(stacks);
		while (stacks->stack_b->number != c)
			rb(stacks);
		pa(stacks);
	}
	return (-1);
}

int	ft_apply_rarrb(t_stacks *stacks, int c, char s)
{
	if (s == 'a')
	{
		while (stacks->stack_a->number != c)
			ra(stacks);
		while (ft_find_place_b(stacks, c) > 0)
			rrb(stacks);
		pb(stacks);
	}
	else
	{
		while (ft_find_place_a(stacks, c) > 0)
			ra(stacks);
		while (stacks->stack_b->number != c)
			rrb(stacks);
		pa(stacks);
	}
	return (-1);
}
