/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:47:38 by kgebski           #+#    #+#             */
/*   Updated: 2023/06/01 11:28:30 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	get_lentht_of_part(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

int	number_of_words(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s != '\0' && *s == c)
			s++;
		if (*s)
			i++;
		while (*s != '\0' && *s != c)
			s++;
	}
	return (i);
}

static int	get_word(char	**result, int i, char const *s, char c)
{
	int		lentht_of_word;

	lentht_of_word = get_lentht_of_part(s, c);
	result[i] = (char *)malloc(lentht_of_word + 1);
	if (!result[i])
	{
		while (--i >= 0)
		{
			free(result[i]);
		}
		free(result);
		return (0);
	}
	ft_memcpy(result[i], s, (unsigned long)lentht_of_word);
	result[i][lentht_of_word] = '\0';
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;

	result = (char **)malloc((number_of_words(s, c) + 1) * sizeof(char *));
	if (!result)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!get_word(result, i, s, c))
				return (0);
			i++;
		}
		while (*s != c && *s)
			s++;
	}
	result[i] = 0;
	return (result);
}
