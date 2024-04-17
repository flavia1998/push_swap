/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_check_args.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- < fvieira-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:07:11 by fvieira-          #+#    #+#             */
/*   Updated: 2024/04/12 15:30:00 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_duplicates(t_stack *stack)
{
	t_stack *tmp;

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

int ft_error(t_stacks *stacks, int free_stack)
{
	if (free_stack  == 1)
		free_stacks(stacks);
	else 
		free(stacks);
		
	write(2, "Error\n", 6);

	return 1;
}

int is_invalid_char(const char *str)
{
	if (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\f' || *str == '\v' || *str == '\r')
		return 1;
	return 0;
}

t_int_or_error create_error(){
	t_int_or_error result;
	result.value = 0;
	result.is_error = 1;
	return result;
}

t_int_or_error create_success(int value){
	t_int_or_error result;
	result.value = value;
	result.is_error = 0;
	return result;
}

t_int_or_error ft_atoll(const char *str)
{
	int mod;
	long long int i;
	i = 0;
	mod = 1;

	while (is_invalid_char(str) == 1)
		str++;
	if (*str == '-')
	{
		mod = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str)
	{
		if (!ft_isdigit(*str))
			return (create_error());
		i = i * 10 + (*str - 48);
		str++;
	}
	if ((mod * i) > 2147483647 || (mod * i) < -2147483648)
		return (create_error());
	return (create_success(mod * i));
}

int count_nodes(t_stack *head)
{
	t_stack *aux;
	int i;

	aux = head;
	i = 0;
	while (aux != NULL)
	{
		aux = aux->next;
		i++;
	}
	return (i);
}

void clean_nodes(t_stack *stack)
{
	t_stack *aux;

	aux = stack;
	while (aux)
	{
		stack = aux->next;
		free(aux);
		aux = stack;
	}
}
