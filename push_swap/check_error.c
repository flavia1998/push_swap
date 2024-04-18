/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- < fvieira-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:43:46 by fvieira-          #+#    #+#             */
/*   Updated: 2024/04/18 15:50:55 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_error(t_stacks *stacks, int free_stack)
{
	if (free_stack == 1)
		free_stacks(stacks);
	else
		free(stacks);
	write(2, "Error\n", 6);
	return (1);
}

t_int_or_error	create_error(void)
{
	t_int_or_error	result;

	result.value = 0;
	result.is_error = 1;
	return (result);
}

t_int_or_error	create_success(int value)
{
	t_int_or_error	result;

	result.value = value;
	result.is_error = 0;
	return (result);
}

t_int_or_error	ft_atoll_parse(const char *str, long long int i, int mod)
{
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

t_int_or_error	ft_atoll(const char *str)
{
	int				mod;
	long long int	i;

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
	if (!*str)
		return (create_error());
	return (ft_atoll_parse(str, i, mod));
}
