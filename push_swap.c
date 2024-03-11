/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- < fvieira-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:37:38 by fvieira-          #+#    #+#             */
/*   Updated: 2024/02/19 16:57:11 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void print_stacks(stacks_t *stacks)
{
	stack_t *aux_a = stacks->stack_a;
	stack_t *aux_b = stacks->stack_b;

	printf("-------\n");
	printf("[A]  [B]\n");
	while (aux_a || aux_b)
	{
		if (aux_a)
		{
			printf(" %d", aux_a->number);
			aux_a = aux_a->next;
		}
		else
		{
			printf("  ");
		}
		printf("    ");
		if (aux_b)
		{
			printf("%d", aux_b->number);
			aux_b = aux_b->next;
		}
		printf("\n");
	}
}

int check_arg(int argc, char **argv)
{
	if (check_arguments_repeat(argc, argv) == 1 || check_if_str(argc, argv) == 1)
	{
		return 0;
	}
	return 1;
}

int main(int argc, char **argv)
{
	int i;
	int number;
	stacks_t *stacks = NULL;
	stacks = malloc(sizeof(stack_t));

	i = 1;
	if (argc < 2)
		return 0;
	if (check_arg(argc, argv) == 0)
		ft_error();
	while (i < argc)
	{
		number = ft_atoll(argv[i]);
		if (stacks->stack_a == NULL)
			stacks->stack_a = create_node(number);
		else
			push_end(stacks->stack_a, number);
		i++;
	}
	sort_stack(stacks);
	print_list(stacks->stack_a);
	return 0;
}
