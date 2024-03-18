#include "push_swap.h"

// This function calculate and decides which rotation
// combination is best to use to sort the stack. Of
// course, after rotation there is always one push
// operation is left to do which i embeded to code.
// Function is used during push from B to A.
int ft_rotate_type_ba(t_stacks *stacks)
{
	int i;
	stack_t *tmp;

	tmp = stacks->stack_b;
	i = ft_case_rrarrb_a(stacks, stacks->stack_b->number);
	while (tmp)
	{
		if (i > ft_case_rarb_a(stacks, tmp->number))
			i = ft_case_rarb_a(stacks, tmp->number);
		if (i > ft_case_rrarrb_a(stacks, tmp->number))
			i = ft_case_rrarrb_a(stacks, tmp->number);
		if (i > ft_case_rarrb_a(stacks, tmp->number))
			i = ft_case_rarrb_a(stacks, tmp->number);
		if (i > ft_case_rrarb_a(stacks, tmp->number))
			i = ft_case_rrarb_a(stacks, tmp->number);
		tmp = tmp->next;
	}
	return (i);
}

// This function calculate and decides which rotation
// combination is best to use to sort the stack. Of
// course, after rotation there is always one push
// operation is left to do which i embeded to code.
// Function is used during push from A to B.
int ft_rotate_type_ab(t_stacks *stacks)
{
	int i;
	stack_t *tmp;

	tmp = stacks->stack_a;
	i = ft_case_rrarrb(stacks, stacks->stack_a->number);
	while (tmp)
	{
		if (i > ft_case_rarb(stacks, tmp->number))
			i = ft_case_rarb(stacks, tmp->number);
		if (i > ft_case_rrarrb(stacks, tmp->number))
			i = ft_case_rrarrb(stacks, tmp->number);
		if (i > ft_case_rarrb(stacks, tmp->number))
			i = ft_case_rarrb(stacks, tmp->number);
		if (i > ft_case_rrarb(stacks, tmp->number))
			i = ft_case_rrarb(stacks, tmp->number);
		tmp = tmp->next;
	}
	return (i);
}
