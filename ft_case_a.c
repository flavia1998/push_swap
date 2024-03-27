/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- < fvieira-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 18:49:35 by fvieira-          #+#    #+#             */
/*   Updated: 2024/03/27 18:49:35 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_case_rarb_a(t_stacks *stacks, int c)
{
	int	i;

	i = ft_find_place_a(stacks, c);
	if (i < ft_find_index(stacks->stack_b, c))
		i = ft_find_index(stacks->stack_b, c);
	return (i);
}

int	ft_case_rrarrb_a(t_stacks *stacks, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_a(stacks, c))
		i = count_nodes(stacks->stack_a) - ft_find_place_a(stacks, c);
	if ((i < (count_nodes(stacks->stack_b) - ft_find_index(stacks->stack_b, c)))
		&& ft_find_index(stacks->stack_b, c))
		i = count_nodes(stacks->stack_b) - ft_find_index(stacks->stack_b, c);
	return (i);
}

int	ft_case_rarrb_a(t_stacks *stacks, int c)
{
	int	i;

	i = 0;
	if (ft_find_index(stacks->stack_b, c))
		i = count_nodes(stacks->stack_b) - ft_find_index(stacks->stack_b, c);
	i = ft_find_place_a(stacks, c) + i;
	return (i);
}

int	ft_case_rrarb_a(t_stacks *stacks, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_a(stacks, c))
		i = count_nodes(stacks->stack_a) - ft_find_place_a(stacks, c);
	i = ft_find_index(stacks->stack_b, c) + i;
	return (i);
}
