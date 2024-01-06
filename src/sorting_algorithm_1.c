/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_algorithm_1.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 12:26:43 by kgebski           #+#    #+#             */
/*   Updated: 2023/06/01 11:58:50 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_sorted(t_list *lst)
{
	if (lst)
	{
		while (lst->next)
		{
			if (lst->content > lst->next->content)
				return (0);
			lst = lst->next;
		}
	}
	return (1);
}

void	sort_stack(t_list **stack_a, t_list **stack_b)
{
	int	min;
	int	max;

	min = find_minimum_val(*stack_a);
	max = find_maximum_val(*stack_a);
	if (is_sorted(*stack_a))
		return ;
	if (ft_lstsize(*stack_a) > 50)
		create_parts(stack_a, stack_b, min, max);
	else
	{
		while (!is_sorted(*stack_a) || ft_lstsize(*stack_b) != 0)
		{
			if (ft_lstsize(*stack_a) == 2)
				sa(stack_a);
			else if (ft_lstsize(*stack_a) < 4)
			{
				sort_three(stack_a);
				while (ft_lstsize(*stack_b) > 0)
					pa(stack_a, stack_b);
			}
			else
				sort_ten(stack_a, stack_b, ft_lstsize(*stack_a));
		}
	}
}

void	create_parts(t_list **a, t_list **b, int min, int max)
{
	int	i;
	int	parts;
	int	range;

	parts = 10;
	if (ft_lstsize(*a) > 300)
		parts = 48;
	range = ft_abs(min - max) / parts + ft_abs(min - max) % parts;
	i = 0;
	while (i < parts)
	{
		create_part(a, b, min + i * range, min + (i + 1) * range);
		i++;
	}
	while (ft_lstsize(*b) != 0)
		sort_n2(a, b);
}

void	create_part(t_list **a, t_list **b, int min, int max)
{
	int	first_n;
	int	last_n;
	int	j;

	first_n = index_first_node(*a, min, max);
	while (first_n != -1)
	{
		j = 0;
		last_n = index_last_node(*a, min, max);
		if (first_n < ft_lstsize(*a) - last_n)
			while (first_n--)
				ra(a);
		else
			while (j++ < ft_lstsize(*a) - last_n)
				rra(a);
		pb(a, b);
		if ((*b)->content < (min + max) / 2 && ft_lstsize(*b) > 2)
			rb(b);
		last_n = index_last_node(*a, min, max);
		first_n = index_first_node(*a, min, max);
	}
}
