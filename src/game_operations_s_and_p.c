/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_operations_s_and_p.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:43:26 by kgebski           #+#    #+#             */
/*   Updated: 2023/05/31 18:18:48 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list **A, t_list **B)
{
	do_push(B, A);
	ft_putstr_fd("pa\n", 1);
}

void	pb(t_list **A, t_list **B)
{
	do_push(A, B);
	ft_putstr_fd("pb\n", 1);
}

void	sa(t_list **A)
{
	swap_stack(A);
	ft_putstr_fd("sa\n", 1);
}

void	sb(t_list **B)
{
	swap_stack(B);
	ft_putstr_fd("sb\n", 1);
}

void	ss(t_list **A, t_list **B)
{
	swap_stack(A);
	swap_stack(B);
	ft_putstr_fd("ss\n", 1);
}
