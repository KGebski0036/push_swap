/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 11:50:52 by kgebski           #+#    #+#             */
/*   Updated: 2023/06/01 11:53:44 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include "libft.h"

# include <stdio.h>

//*     --=[ main.c ]=--
void	free_stack(t_list	**stack);
int		check_args(int argc, char *argv[]);
void	clear(int *tab_of_numbers, t_list **stack_a, t_list	**stack_b);

//*     --=[ sorting_algorithm_*.c ]=--
int		*parser(int argc, char *argv[]);
int		not_unique(int *tab, size_t size);
void	initialize_list(int *tab, size_t size, t_list **lst);

//*     --=[ sorting_algorithm_*.c ]=--
void	sort_stack(t_list **stack_a, t_list **stack_b);
void	create_part(t_list **stack_a, t_list **stack_b, int min, int max);
void	create_parts(t_list **a, t_list **b, int min, int max);

void	sort_three(t_list **stack_a);
void	sort_ten(t_list **stack_a, t_list **stack_b, size_t n);
void	sort_n2(t_list **stack_a, t_list **stack_b);

//*     --=[ stack_vars.c ]=--
int		find_minimum_index(t_list *lst, size_t n);
int		find_maximum_index(t_list *lst);
int		find_minimum_val(t_list *lst);
int		find_maximum_val(t_list *lst);

//*		--=[ index_node.c ]=--
int		index_first_node(t_list *stack, int range_start, int range_end);
int		index_last_node(t_list *stack, int range_start, int range_end);

//*     --=[ stack_operations.c ]=--
void	do_push(t_list **src, t_list **dst);
void	swap_stack(t_list **stack);
void	move_node_to_end(t_list **stack);
void	move_last_node_to_top(t_list **stack);

//*     --=[ game_operations_*.c ]=--
void	pa(t_list **A, t_list **B);
void	pb(t_list **A, t_list **B);
void	sa(t_list **A);
void	sb(t_list **A);
void	ss(t_list **A, t_list **B);
void	ra(t_list **A);
void	rb(t_list **B);
void	rr(t_list **A, t_list **B);
void	rra(t_list **A);
void	rrb(t_list **B);
void	rrr(t_list **A, t_list **B);

#endif