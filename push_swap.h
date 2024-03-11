/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- < fvieira-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:05:53 by flavia            #+#    #+#             */
/*   Updated: 2024/02/19 16:55:05 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#	define PUSH_SWAP_H

#	include <stdio.h>
#	include <unistd.h>
#include "libft.h"
#include "ft_printf.h"
#include <limits.h>

typedef struct stack
{
    int number;
    struct stack *next;
    //struct stack *prev;
    int index;
} stack_t;

typedef struct stacks
{
    struct stack *stack_a;
    struct stack *stack_b;
} stacks_t;

int check_arguments_repeat(int argc, char **argv);
int ft_atoll(const char *nptr);
stack_t *create_node(int number);
void push_start(stack_t **head, int number);
void push_end(stack_t *head, int number);
void print_list(stack_t *head);
stack_t *pop(stack_t **head);
void swap_first_two (stack_t **head);
int count_nodes(stack_t *head);
void sa(stacks_t *stacks);
void sb(stacks_t *stacks);
void ss(stacks_t *stacks);
void pa(stacks_t *stacks);
void pb(stacks_t *stacks);
void ra(stacks_t *stacks);
void rb (stacks_t *stacks);
void rr(stacks_t *stacks);
void rra(stacks_t *stacks);
void rrb(stacks_t *stacks);
void rrr(stacks_t *stacks);
void sort_stack(stacks_t *stacks);
int is_stack_sorted(stacks_t *stacks);
void ft_sort(stacks_t *stacks);
int	ft_find_place_b(stacks_t *stacks, int nbr_push);
int	ft_find_place_a(stacks_t *stacks, int nbr_push);

int				ft_rotate_type_ba(stacks_t *stacks);
int				ft_rotate_type_ab(stacks_t *stacks);
int				ft_case_rarb_a(stacks_t *stacks, int c);
int				ft_case_rrarrb_a(stacks_t *stacks, int c);
int				ft_case_rarrb_a(stacks_t *stacks, int c);
int				ft_case_rrarb_a(stacks_t *stacks, int c);
int				ft_apply_rarb(stacks_t *stacks, int c, char s);
int				ft_apply_rrarrb(stacks_t *stacks, int c, char s);
int				ft_apply_rrarb(stacks_t *stacks, int c, char s);
int				ft_apply_rarrb(stacks_t *stacks, int c, char s);
int				is_stack_sorted(stacks_t *stacks);
void			sort_stack(stacks_t *stacks);
stack_t			*lstlast(stack_t *lst);
int				ft_min(stack_t *a);
int				ft_max(stack_t *a);
void			ft_sort_three(stacks_t *stacks);
int				ft_find_index(stack_t *a, int number);
int				ft_find_place_b(stacks_t *stacks, int nbr_push);
int				ft_find_place_a(stacks_t *stacks, int nbr_push);
int				ft_case_rarb(stacks_t *stacks, int c);
int				ft_case_rrarrb(stacks_t *stacks, int c);
int				ft_case_rrarb(stacks_t *stacks, int c);
int				ft_case_rarrb(stacks_t *stacks, int c);
void			ft_sort_b_till_3(stacks_t *stacks);
void			ft_sort_b(stacks_t *stacks);
void			ft_sort_a(stacks_t *stacks);
void			ft_sort(stacks_t *stacks);
int             check_if_str(int argc, char **argv);
void	ft_error(void);

#endif