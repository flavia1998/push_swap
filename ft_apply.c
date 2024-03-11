#include "push_swap.h"

// This function rotates both stack_a and stack_b
// in the same direction as required amount.
int ft_apply_rarb(stacks_t *stacks, int c, char s)
{
	if (s == 'a')
	{
		while (stacks->stack_a->number != c && ft_find_place_b(stacks, c) > 0)
			rr(stacks);
		while (stacks->stack_a->number != c)
			ra(stacks);
		while (ft_find_place_b(stacks, c) > 0)
			rb(stacks);
		pb(stacks);
	}
	else
	{
		while (stacks->stack_b->number != c && ft_find_place_a(stacks, c) > 0)
			rr(stacks);
		while (stacks->stack_b->number != c)
			rb(stacks);
		while (ft_find_place_a(stacks, c) > 0)
			ra(stacks);
		pa(stacks);
	}
	return (-1);
}

// This function rotate both stack_a and stack_b in the
// reverse direction as required amount.
int ft_apply_rrarrb(stacks_t *stacks, int c, char s)
{
	if (s == 'a')
	{
		while (stacks->stack_a->number != c && ft_find_place_b(stacks, c) > 0)
			rrr(stacks);
		while (stacks->stack_a->number != c)
			rra(stacks);
		while (ft_find_place_b(stacks, c) > 0)
			rrb(stacks);
		pb(stacks);
	}
	else
	{
		while (stacks->stack_b->number != c && ft_find_place_a(stacks, c) > 0)
			rrr(stacks);
		while (stacks->stack_b->number != c)
			rrb(stacks);
		while (ft_find_place_a(stacks, c) > 0)
			rra(stacks);
		pa(stacks);
	}
	return (-1);
}

// This function rotate the stack_a in reverse direction,
// the stack_b in oppsite direction of stack_a as required amount.
int ft_apply_rrarb(stacks_t *stacks, int c, char s)
{
	if (s == 'a')
	{
		while (stacks->stack_a->number != c)
			rra(stacks);
		while (ft_find_place_b(stacks, c) > 0)
			rb(stacks);
		pb(stacks);
	}
	else
	{
		while (ft_find_place_a(stacks, c) > 0)
			rra(stacks);
		while (stacks->stack_b->number != c)
			rb(stacks);
		pa(stacks);
	}
	return (-1);
}

// This function rotate the stack_b in reverse direction,
// the stack_a in oppsite direction of stack_a as required amount.
int ft_apply_rarrb(stacks_t *stacks, int c, char s)
{
	if (s == 'a')
	{
		while (stacks->stack_a->number != c)
			ra(stacks);
		while (ft_find_place_b(stacks, c) > 0)
			rrb(stacks);
		pb(stacks);
	}
	else
	{
		while (ft_find_place_a(stacks, c) > 0)
			ra(stacks);
		while (stacks->stack_b->number != c)
			rrb(stacks);
		pa(stacks);
	}
	return (-1);
}
