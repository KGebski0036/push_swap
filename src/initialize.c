/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 15:54:44 by kgebski           #+#    #+#             */
/*   Updated: 2023/06/01 10:02:29 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	initialize_list(int *tab, size_t size, t_list **lst)
{
	size_t	i;
	t_list	*new;

	i = 0;
	while (i < size)
	{
		new = ft_lstnew(tab[i]);
		if (!lst)
			*lst = new;
		else
			ft_lstadd_back(lst, new);
		i++;
	}
}
