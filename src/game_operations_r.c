/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_operations_r.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:43:26 by kgebski           #+#    #+#             */
/*   Updated: 2024/01/06 15:26:18 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **A)
{
	move_node_to_end(A);
	ft_putstr_fd("ra\n", 1);
}

void	rb(t_list **B)
{
	move_node_to_end(B);
	ft_putstr_fd("rb\n", 1);
}

void	rr(t_list **A, t_list **B)
{
	move_node_to_end(A);
	move_node_to_end(B);
	ft_putstr_fd("rr\n", 1);
}
