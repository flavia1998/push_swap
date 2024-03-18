#include "push_swap.h"

int is_stack_sorted(t_stacks *stacks)
{
	stack_t *aux;
	aux = stacks->stack_a;

	while (aux)
	{
		if (aux->next && aux->number > aux->next->number)
		{
			return 0;
		}
		aux = aux->next;
	}
	return 1;
}

// This function returns the last element of the stack.
stack_t *lstlast(stack_t *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// This function finds and returns the smallest number
// in the given stack.
int ft_min(stack_t *a)
{
	int i;

	i = a->number;
	while (a)
	{
		if (a->number < i)
			i = a->number;
		a = a->next;
	}
	return (i);
}

// This function finds and returns the biggest number
// in the given stack.
int ft_max(stack_t *a)
{
	int i;

	i = a->number;
	while (a)
	{
		if (a->number > i)
			i = a->number;
		a = a->next;
	}
	return (i);
}

// This function sort the stack if there are only
// three elements in the stack.
void ft_sort_three(t_stacks *stacks)
{

	if (ft_min(stacks->stack_a) == stacks->stack_a->number)
	{
		rra(stacks);
		sa(stacks);
	}
	else if (ft_max(stacks->stack_a) == stacks->stack_a->number)
	{
		ra(stacks);
		if (!is_stack_sorted(stacks))
			sa(stacks);
	}
	else
	{
		if (ft_find_index(stacks->stack_a, ft_max(stacks->stack_a)) == 1)
			rra(stacks);
		else
			sa(stacks);
	}
}
