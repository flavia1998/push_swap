/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- < fvieira-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 19:47:36 by fvieira-          #+#    #+#             */
/*   Updated: 2024/03/27 19:48:04 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb_log(t_stacks *stacks, int log)
{
	swap_first_two(&stacks->stack_b);
	if (log == 1)
		write(1, "sb\n", 3);
}

void	sb(t_stacks *stacks)
{
	sb_log(stacks, 1);
}
