/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- < fvieira-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 19:10:05 by fvieira-          #+#    #+#             */
/*   Updated: 2024/03/27 19:10:05 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rotate_type_ba(t_stacks *stacks)
{
	int		i;
	t_stack	*tmp;

	tmp = stacks->stack_b;
	i = ft_case_rrarrb_a(stacks, stacks->stack_b->number);
	while (tmp)
	{
		if (i > ft_case_rarb_a(stacks, tmp->number))
			i = ft_case_rarb_a(stacks, tmp->number);
		if (i > ft_case_rrarrb_a(stacks, tmp->number))
			i = ft_case_rrarrb_a(stacks, tmp->number);
		if (i > ft_case_rarrb_a(stacks, tmp->number))
			i = ft_case_rarrb_a(stacks, tmp->number);
		if (i > ft_case_rrarb_a(stacks, tmp->number))
			i = ft_case_rrarb_a(stacks, tmp->number);
		tmp = tmp->next;
	}
	return (i);
}

int	ft_rotate_type_ab(t_stacks *stacks)
{
	int		i;
	t_stack	*tmp;

	tmp = stacks->stack_a;
	i = ft_case_rrarrb(stacks, stacks->stack_a->number);
	while (tmp)
	{
		if (i > ft_case_rarb(stacks, tmp->number))
			i = ft_case_rarb(stacks, tmp->number);
		if (i > ft_case_rrarrb(stacks, tmp->number))
			i = ft_case_rrarrb(stacks, tmp->number);
		if (i > ft_case_rarrb(stacks, tmp->number))
			i = ft_case_rarrb(stacks, tmp->number);
		if (i > ft_case_rrarb(stacks, tmp->number))
			i = ft_case_rrarb(stacks, tmp->number);
		tmp = tmp->next;
	}
	return (i);
}
