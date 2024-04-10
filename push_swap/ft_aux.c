/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aux.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- < fvieira-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 18:47:26 by fvieira-          #+#    #+#             */
/*   Updated: 2024/03/27 18:47:26 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_stack_sorted(t_stacks *stacks)
{
	t_stack	*aux;

	aux = stacks->stack_a;
	while (aux)
	{
		if (aux->next && aux->number > aux->next->number)
		{
			return (0);
		}
		aux = aux->next;
	}
	return (1);
}

t_stack	*lstlast(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

int	ft_min(t_stack *a)
{
	int	i;

	i = a->number;
	while (a)
	{
		if (a->number < i)
			i = a->number;
		a = a->next;
	}
	return (i);
}

int	ft_max(t_stack *a)
{
	int	i;

	i = a->number;
	while (a)
	{
		if (a->number > i)
			i = a->number;
		a = a->next;
	}
	return (i);
}

void	ft_sort_three(t_stacks *stacks)
{
	if (ft_min(stacks->stack_a) == stacks->stack_a->number)
	{
		rra(stacks);
		sa(stacks);
	}
	else if (ft_max(stacks->stack_a) == stacks->stack_a->number)
	{
		ra(stacks);
		if (!is_stack_sorted(stacks))
			sa(stacks);
	}
	else
	{
		if (ft_find_index(stacks->stack_a, ft_max(stacks->stack_a)) == 1)
			rra(stacks);
		else
			sa(stacks);
	}
}
