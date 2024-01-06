/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_operations_rr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:43:26 by kgebski           #+#    #+#             */
/*   Updated: 2023/06/01 11:37:39 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list **A)
{
	move_last_node_to_top(A);
	ft_putstr_fd("rra\n", 1);
}

void	rrb(t_list **B)
{
	move_last_node_to_top(B);
	ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_list **A, t_list **B)
{
	move_last_node_to_top(B);
	move_last_node_to_top(A);
	ft_putstr_fd("rrr\n", 1);
}
