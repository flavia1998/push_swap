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
			if ((argv[j][i] < 48 || argv[j][i] > 57) && (argv[j][i] != '-' || argv[j][i] != '+'))
			{
				return 0;
			}

			if (argv[j][0] == '0' && argv[j][1])
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

int ft_atoll(const char *str)
{
	int mod;
	long long int i;

	i = 0;
	mod = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\f' || *str == '\v' || *str == '\r')
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
			ft_error();
		i = i * 10 + (*str - 48);
		str++;
	}
	if ((mod * i) > 2147483647 || (mod * i) < -2147483648)
		ft_error();
	return (mod * i);
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