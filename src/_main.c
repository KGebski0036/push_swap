/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _main.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 11:47:02 by kgebski           #+#    #+#             */
/*   Updated: 2023/06/01 11:54:24 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// static	void	print_stacks(t_list *stack_a, t_list *stack_b)
// {
// 	t_list	*tmp_a;
// 	t_list	*tmp_b;

// 	tmp_a = stack_a;
// 	tmp_b = stack_b;
// 	ft_putstr_fd("__A__     __B__\n", 1);
// 	while (!(tmp_a == 0 && tmp_b == 0))
// 	{
// 		if (tmp_a != 0)
// 		{
// 			ft_putnbr_fd(tmp_a->content, 1);
// 			tmp_a = tmp_a->next;
// 		}
// 		ft_putstr_fd("         ", 1);
// 		if (tmp_b != 0)
// 		{
// 			ft_putnbr_fd(tmp_b->content, 1);
// 			tmp_b = tmp_b->next;
// 		}
// 		ft_putendl_fd("", 1);
// 	}
// }

int	main(int argc, char *argv[])
{
	int		*tab_of_numbers;
	t_list	**stack_a;
	t_list	**stack_b;
	int		size;

	size = check_args(argc, argv);
	tab_of_numbers = parser(argc, argv);
	if (tab_of_numbers == 0 || not_unique(tab_of_numbers, size))
	{
		ft_putstr_fd("Error\n", 2);
		return (0);
	}
	stack_a = (t_list **)malloc(sizeof(t_list));
	stack_b = (t_list **)malloc(sizeof(t_list));
	*stack_a = 0;
	*stack_b = 0;
	initialize_list(tab_of_numbers, size, stack_a);
	if (size > 1)
		sort_stack(stack_a, stack_b);
	clear(tab_of_numbers, stack_a, stack_b);
	return (0);
}

void	clear(int *tab_of_numbers, t_list **stack_a, t_list	**stack_b)
{
	free(tab_of_numbers);
	free_stack(stack_a);
	free_stack(stack_b);
}

void	free_stack(t_list	**stack)
{
	t_list	*tmp;
	t_list	*node;

	node = *stack;
	while (node)
	{
		tmp = node;
		node = node->next;
		free(tmp);
	}
	free(stack);
}

int	check_args(int argc, char *argv[])
{
	if (argc == 1)
		return (0);
	if (argc == 2)
		return (number_of_words(argv[1], ' '));
	else
		return (argc - 1);
}
