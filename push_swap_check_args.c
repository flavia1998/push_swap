/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_chekers.c                                :+:      :+:    :+:   */
/* //                                                   +:+ +:+         +:+     */
/*   By: fvieira- < fvieira-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:07:11 by fvieira-          #+#    #+#             */
/*   Updated: 2023/11/18 18:38:25 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_arguments_repeat(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) == 0)
			{
				return 1;
			}
			j++;
		}
		i++;
	}
	return 0;
}

int check_if_str(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = 1;

	while (j < argc)
	{
		i = 0;
		while (argv[j][i])
		{
			if (argv[j][i] < 48 || argv[j][i] > 57 )
			{
				return 0;
			}
			i++;
		}
		j++;
	}
	return 1;
}

void ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

int ft_atoll(const char *nptr)
{
	long long int result;
	int sign;

	sign = 1;
	result = 0;

	while (*nptr == ' ' || *nptr == '\n' || *nptr == '\t')
		nptr++;
	if (*nptr == '-')
		sign = sign * (-1);
	if (*nptr == '+' || *nptr == '-')
		nptr++;
	while (*nptr >= '0' && *nptr <= '9')
	{
		result = result * 10 + (*nptr - '0');
		nptr++;
	}
	if ((result * sign > INT_MAX) || (result * sign < INT_MIN))
	{
		ft_error();
	}
	return result * sign;
}

int count_nodes(stack_t *head)
{
	stack_t *aux;
	aux = head;
	int i;

	i = 0;
	while (aux != NULL)
	{
		aux = aux->next;
		i++;
	}
	return i;
}