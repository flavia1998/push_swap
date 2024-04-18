/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_check_args.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- < fvieira-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:07:11 by fvieira-          #+#    #+#             */
/*   Updated: 2024/04/18 15:50:02 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_duplicates(t_stack *stack)
{
	t_stack	*tmp;

	while (stack)
	{
		tmp = stack->next;
		while (tmp)
		{
			if (stack->number == tmp->number)
				return (1);
			tmp = tmp->next;
		}
		stack = stack->next;
	}
	return (0);
}

int	count_nodes(t_stack *head)
{
	t_stack	*aux;
	int		i;

	aux = head;
	i = 0;
	while (aux != NULL)
	{
		aux = aux->next;
		i++;
	}
	return (i);
}

void	clean_nodes(t_stack *stack)
{
	t_stack	*aux;

	aux = stack;
	while (aux)
	{
		stack = aux->next;
		free(aux);
		aux = stack;
	}
}

int	is_invalid_char(const char *str)
{
	if (*str == ' ' || *str == '\t' || *str == '\n'
		|| *str == '\f' || *str == '\v' || *str == '\r')
		return (1);
	return (0);
}
