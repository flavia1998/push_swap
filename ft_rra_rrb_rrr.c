#include "push_swap.h"

void rra(stacks_t *stacks)
{
    stack_t *last_element;
    stack_t *before_last_element;

    last_element = stacks->stack_a;

    while (last_element->next)
    {
        last_element = last_element->next;
        if (last_element->next != NULL)
            before_last_element = last_element;
    }

    last_element->next = stacks->stack_a;
    stacks->stack_a = last_element;
    before_last_element->next = NULL;
}

void rrb(stacks_t *stacks)
{
    stack_t *last_element;
    stack_t *before_last_element;

    last_element = stacks->stack_b;

    while (last_element->next)
    {
        last_element = last_element->next;
        if (last_element->next != NULL)
            before_last_element = last_element;
    }

    last_element->next = stacks->stack_b;
    stacks->stack_b = last_element;
    before_last_element->next = NULL;
}

void rrr(stacks_t *stacks)
{
    rra(stacks);
    rrb(stacks);
}