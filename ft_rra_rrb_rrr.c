#include "push_swap.h"

void rra_log(stacks_t *stacks, int log)
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
    if (log == 1)
        write(1, "rra\n", 4);
}

void rrb_log(stacks_t *stacks, int log)
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
    if (log == 1)
        write(1, "rrb\n", 4);
}

void rra(stacks_t *stacks)
{
    rra_log(stacks, 1);
}

void rrb(stacks_t *stacks)
{
    rrb_log(stacks, 1);
}

void rrr(stacks_t *stacks)
{
    rra_log(stacks, 0);
    rrb_log(stacks, 0);
    write(1, "rrr\n", 4);
}