#include "push_swap.h"


// This function calculates the required amount of rotation.
// Calculations are done for ra+rb case.
int ft_case_rarb_a(t_stacks *stacks, int c)
{
	int i;

	i = ft_find_place_a(stacks, c);
	if (i < ft_find_index(stacks->stack_b, c))
		i = ft_find_index(stacks->stack_b, c);
	return (i);
}

// This function calculates the required amount of rotation.
// Calculations are done for rra+rrb case.
int ft_case_rrarrb_a(t_stacks *stacks, int c)
{
	int i;

	i = 0;
	if (ft_find_place_a(stacks, c))
		i = count_nodes(stacks->stack_a) - ft_find_place_a(stacks, c);
	if ((i < (count_nodes(stacks->stack_b) - ft_find_index(stacks->stack_b, c))) && ft_find_index(stacks->stack_b, c))
		i = count_nodes(stacks->stack_b) - ft_find_index(stacks->stack_b, c);
	return (i);
}

// This function calculates the required amount of rotation.
// Calculations are done for ra+rrb case.
int ft_case_rarrb_a(t_stacks *stacks, int c)
{
	int i;

	i = 0;
	if (ft_find_index(stacks->stack_b, c))
		i = count_nodes(stacks->stack_b) - ft_find_index(stacks->stack_b, c);
	i = ft_find_place_a(stacks, c) + i;
	return (i);
}

// This function calculates the required amount of rotation.
// Calculations are done for rra+rb case.
int ft_case_rrarb_a(t_stacks *stacks, int c)
{
	int i;

	i = 0;
	if (ft_find_place_a(stacks, c))
		i = count_nodes(stacks->stack_a) - ft_find_place_a(stacks, c);
	i = ft_find_index(stacks->stack_b, c) + i;
	return (i);
}

// This function calculates how many times
// we should rotate the stacks together.
// Because after a certain amoun of rotate, we will
// proceed only with one stack rotation.
int ft_case_rarb(t_stacks *stacks, int c)
{
	int i;

	i = ft_find_place_b(stacks, c);
	if (i < ft_find_index(stacks->stack_a, c))
		i = ft_find_index(stacks->stack_a, c);
	return (i);
}

// This function calculates how many times we should rotate the stacks together.
// Because after a certain amoun of rotate, we will proceed only with one stack
// rotation. Since here we have reverse rotate,rather than index number,
// we check reverse index number which is
// calculated by list_size - index_number.
int ft_case_rrarrb(t_stacks *stacks, int c)
{
	int i;

	i = 0;
	if (ft_find_place_b(stacks, c))
		i = count_nodes(stacks->stack_b) - ft_find_place_b(stacks, c);
	if ((i < (count_nodes(stacks->stack_a) - ft_find_index(stacks->stack_a, c))) && ft_find_index(stacks->stack_a, c))
		i = count_nodes(stacks->stack_a) - ft_find_index(stacks->stack_a, c);
	return (i);
}

// Again, this function makes similar calculations.
// This function do same calculations for rra+rb case.
int ft_case_rrarb(t_stacks *stacks, int c)
{
	int i;

	i = 0;
	if (ft_find_index(stacks->stack_a, c))
		i = count_nodes(stacks->stack_a) - ft_find_index(stacks->stack_a, c);
	i = ft_find_place_b(stacks, c) + i;
	return (i);
}

// Again, this function makes similar calculations.
// This function do same calculations for ra+rrb case.
int ft_case_rarrb(t_stacks *stacks, int c)
{
	int i;

	i = 0;
	if (ft_find_place_b(stacks, c))
		i = count_nodes(stacks->stack_b) - ft_find_place_b(stacks, c);
	i = ft_find_index(stacks->stack_a, c) + i;
	return (i);
}
