/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 11:53:48 by kgebski           #+#    #+#             */
/*   Updated: 2023/06/01 11:43:05 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "push_swap.h"

int		parse_number(int *r, char *input, int j);
int		isnumber(char *s);
void	free_input(char **input);

int	*parser(int argc, char **argv)
{
	int		*r;
	int		i;
	int		j;
	char	**input;

	i = 0;
	if (argc == 2)
	{
		j = number_of_words(argv[1], ' ') + 1;
		input = ft_split(argv[1], ' ');
	}
	else
	{
		j = (argc - 1);
		input = argv;
		i = 1;
	}
	r = (int *)malloc(sizeof(int) * j);
	j = 0;
	while (input[i])
		if (!parse_number(r, input[i++], j++))
			return (0);
	if (argc == 2)
		free_input(input);
	return (r);
}

int	parse_number(int *r, char *input, int j)
{
	long	number;

	if (!isnumber(input))
	{
		free(r);
		return (0);
	}
	number = ft_atoi(input);
	if (number > INT_MAX || number < INT_MIN)
	{
		free(r);
		return (0);
	}
	r[j] = (int)number;
	return (1);
}

int	isnumber(char *s)
{
	int	j;

	j = 0;
	while (s[j])
	{
		if (!ft_isdigit(s[j]) && s[j] != '-' && s[j] != '+')
			return (0);
		j++;
	}
	return (1);
}

void	free_input(char **input)
{
	int	i;

	i = 0;
	while (input[i])
	{
		free(input[i]);
		i++;
	}
	free(input);
}
