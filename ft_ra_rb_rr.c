#include "push_swap.h"

void ra_log(stacks_t *stacks, int log)
{
    stack_t *keep_stack_a;

    keep_stack_a = stacks->stack_a;

    stacks->stack_a = keep_stack_a->next;
    keep_stack_a->next = NULL;

    stack_t *stack = stacks->stack_a;
    while (stack)
    {
        if (stack->next == NULL)
        {
            stack->next = keep_stack_a;
            break;
        }
        stack = stack->next;
    }

    if (log == 1)
        write(1, "ra\n", 3);
}

void rb_log(stacks_t *stacks, int log)
{
    stack_t *keep_stack_b;

    keep_stack_b = stacks->stack_b;

    stacks->stack_b = keep_stack_b->next;
    keep_stack_b->next = NULL;

    stack_t *stack = stacks->stack_b;

    while (stack)
    {
        if (stack->next == NULL)
        {
            stack->next = keep_stack_b;
            break;
        }
        stack = stack->next;
    }
    if (log == 1)
        write(1, "rb\n", 3);
}

void ra(stacks_t *stacks)
{
    ra_log(stacks, 1);
}

void rb(stacks_t *stacks)
{
    rb_log(stacks, 1);
}

void rr(stacks_t *stacks)
{
    ra_log(stacks, 0);
    rb_log(stacks, 0);
    write(1, "rr\n", 3);
}