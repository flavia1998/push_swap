/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- < fvieira-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 18:51:14 by fvieira-          #+#    #+#             */
/*   Updated: 2024/03/27 18:52:31 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_case_rarb(t_stacks *stacks, int c)
{
	int	i;

	i = ft_find_place_b(stacks, c);
	if (i < ft_find_index(stacks->stack_a, c))
		i = ft_find_index(stacks->stack_a, c);
	return (i);
}

int	ft_case_rrarrb(t_stacks *stacks, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_b(stacks, c))
		i = count_nodes(stacks->stack_b) - ft_find_place_b(stacks, c);
	if ((i < (count_nodes(stacks->stack_a) - ft_find_index(stacks->stack_a, c)))
		&& ft_find_index(stacks->stack_a, c))
		i = count_nodes(stacks->stack_a) - ft_find_index(stacks->stack_a, c);
	return (i);
}

int	ft_case_rrarb(t_stacks *stacks, int c)
{
	int	i;

	i = 0;
	if (ft_find_index(stacks->stack_a, c))
		i = count_nodes(stacks->stack_a) - ft_find_index(stacks->stack_a, c);
	i = ft_find_place_b(stacks, c) + i;
	return (i);
}

int	ft_case_rarrb(t_stacks *stacks, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_b(stacks, c))
		i = count_nodes(stacks->stack_b) - ft_find_place_b(stacks, c);
	i = ft_find_index(stacks->stack_a, c) + i;
	return (i);
}
