/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- < fvieira-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:37:38 by fvieira-          #+#    #+#             */
/*   Updated: 2024/04/15 15:00:29 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	fill_stack(int argc, char **argv, t_stacks *stacks)
{
	int	i;
	t_int_or_error result;

	i = 1;
	stacks->stack_a = NULL;
	stacks->stack_b = NULL;
	while (i < argc)
	{
		result = ft_atoll(argv[i]);
		if (result.is_error)
			return 0;
		if (stacks->stack_a == NULL)
			stacks->stack_a = create_node(result.value);
		else
			push_end(stacks->stack_a, result.value);
		i++;
	}

	return 1;
}

void	free_stacks(t_stacks *stacks)
{
	clean_nodes(stacks->stack_a);
	clean_nodes(stacks->stack_b);
	free(stacks);
}

void	print_stacks(t_stacks *stacks)
{
	t_stack	*aux_a;
	t_stack	*aux_b;

	aux_a = stacks->stack_a;
	aux_b = stacks->stack_b;
	ft_printf("-------\n");
	ft_printf("[A]  [B]\n");
	while (aux_a || aux_b)
	{
		if (aux_a)
		{
			ft_printf(" %d", aux_a->number);
			aux_a = aux_a->next;
		}
		else
			ft_printf("  ");
		ft_printf("    ");
		if (aux_b)
		{
			ft_printf("%d", aux_b->number);
			aux_b = aux_b->next;
		}
		ft_printf("\n");
	}
}

int	check_arg(char **argv)
{
	if (!argv[1][0])
		return (0);
	if (argv[1][0] == '-' && !argv[1][1])
		return (0);
	if (argv[1][0] == '+' && !argv[1][1])
		return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	t_stacks	*stacks;

	stacks = NULL;
	stacks = malloc(sizeof(t_stacks));
	if (!stacks || argc < 2)
	{
		free(stacks);
		return (0);
	}
	if (check_arg(argv) == 0 )
		ft_error();
	if (fill_stack(argc, argv, stacks) == 0){
		free_stacks(stacks);
		return (0);
	}
	if (ft_check_duplicates(stacks->stack_a) == 1)
	{
		free_stacks(stacks);
		ft_error();
	}
	if (is_stack_sorted(stacks) == 1)
	{
		free_stacks(stacks);
		return (0);
	}
	sort_stack(stacks);
	free_stacks(stacks);
	return (0);
}
