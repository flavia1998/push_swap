/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- < fvieira-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:05:53 by flavia            #+#    #+#             */
/*   Updated: 2024/04/18 15:49:40 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include "libft.h"
# include "ft_printf.h"
# include <limits.h>

typedef struct int_or_error
{
	int	value;
	int	is_error;
}	t_int_or_error;

typedef struct stack
{
	int				number;
	struct stack	*next;
	int				index;
}	t_stack;

typedef struct stacks
{
	struct stack	*stack_a;
	struct stack	*stack_b;
}	t_stacks;

t_int_or_error	ft_atoll(const char *nptr);
t_stack			*create_node(int number);
void			push_start(t_stack **head, int number);
void			push_end(t_stack *head, int number);
void			print_list(t_stack *head);
t_stack			*pop(t_stack **head);
void			swap_first_two(t_stack **head);
int				count_nodes(t_stack *head);
void			sa(t_stacks *stacks);
void			sb(t_stacks *stacks);
void			ss(t_stacks *stacks);
void			pa(t_stacks *stacks);
void			pb(t_stacks *stacks);
void			ra(t_stacks *stacks);
void			rb(t_stacks *stacks);
void			rr(t_stacks *stacks);
void			rra(t_stacks *stacks);
void			rrb(t_stacks *stacks);
void			rrr(t_stacks *stacks);
void			sort_stack(t_stacks *stacks);
int				is_stack_sorted(t_stacks *stacks);
void			ft_sort(t_stacks *stacks);
int				ft_find_place_b(t_stacks *stacks, int nbr_push);
int				ft_find_place_a(t_stacks *stacks, int nbr_push);
int				ft_rotate_type_ba(t_stacks *stacks);
int				ft_rotate_type_ab(t_stacks *stacks);
int				ft_case_rarb_a(t_stacks *stacks, int c);
int				ft_case_rrarrb_a(t_stacks *stacks, int c);
int				ft_case_rarrb_a(t_stacks *stacks, int c);
int				ft_case_rrarb_a(t_stacks *stacks, int c);
int				ft_apply_rarb(t_stacks *stacks, int c, char s);
int				ft_apply_rrarrb(t_stacks *stacks, int c, char s);
int				ft_apply_rrarb(t_stacks *stacks, int c, char s);
int				ft_apply_rarrb(t_stacks *stacks, int c, char s);
t_stack			*lstlast(t_stack *lst);
int				ft_min(t_stack *a);
int				ft_max(t_stack *a);
void			ft_sort_three(t_stacks *stacks);
int				ft_find_index(t_stack *a, int number);
int				ft_case_rarb(t_stacks *stacks, int c);
int				ft_case_rrarrb(t_stacks *stacks, int c);
int				ft_case_rrarb(t_stacks *stacks, int c);
int				ft_case_rarrb(t_stacks *stacks, int c);
void			ft_sort_b_till_3(t_stacks *stacks);
void			ft_sort_b(t_stacks *stacks);
void			ft_sort_a(t_stacks *stacks);
int				ft_error(t_stacks *stacks, int free_stack);
int				ft_check_duplicates(t_stack *stack);
int				fill_stack(int argc, char **argv, t_stacks *stacks);
void			clean_nodes(t_stack *stack);
void			sb(t_stacks *stacks);
void			sb_log(t_stacks *stacks, int log);
void			swap_first_two(t_stack **head);
void			free_stacks(t_stacks *stacks);
int				ft_error(t_stacks *stacks, int free_stack);
int				is_invalid_char(const char *str);
t_int_or_error	create_error(void);
t_int_or_error	create_success(int value);
t_int_or_error	ft_atoll_parse(const char *str, long long int i, int mod);
t_int_or_error	ft_atoll(const char *str);

#endif
