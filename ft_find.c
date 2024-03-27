/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- < fvieira-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 18:52:59 by fvieira-          #+#    #+#             */
/*   Updated: 2024/03/27 18:52:59 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_index(t_stack *a, int number)
{
	int	i;

	i = 0;
	while (a->number != number)
	{
		i++;
		a = a->next;
	}
	a->index = 0;
	return (i);
}

int	ft_find_place_b(t_stacks *stacks, int nbr_push)
{
	int		i;
	t_stack	*tmp;
	t_stack	*stack_b;

	stack_b = stacks->stack_b;
	i = 1;
	if (nbr_push > stack_b->number && nbr_push < lstlast(stack_b)->number)
		i = 0;
	else if (nbr_push > ft_max(stack_b) || nbr_push < ft_min(stack_b))
		i = ft_find_index(stack_b, ft_max(stack_b));
	else
	{
		tmp = stack_b->next;
		while (stack_b->number < nbr_push || tmp->number > nbr_push)
		{
			stack_b = stack_b->next;
			tmp = stack_b->next;
			i++;
		}
	}
	return (i);
}

int	ft_find_place_a(t_stacks *stacks, int nbr_push)
{
	int		i;
	t_stack	*tmp;
	t_stack	*stack_a;

	stack_a = stacks->stack_a;
	i = 1;
	if (nbr_push < stack_a->number && nbr_push > lstlast(stack_a)->number)
		i = 0;
	else if (nbr_push > ft_max(stack_a) || nbr_push < ft_min(stack_a))
		i = ft_find_index(stack_a, ft_min(stack_a));
	else
	{
		tmp = stack_a->next;
		while (stack_a->number > nbr_push || tmp->number < nbr_push)
		{
			stack_a = stack_a->next;
			tmp = stack_a->next;
			i++;
		}
	}
	return (i);
}
