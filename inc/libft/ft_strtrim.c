/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:48:36 by kgebski           #+#    #+#             */
/*   Updated: 2023/05/24 09:55:19 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	is_char_to_trim(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

static int	how_many_to_trim_f(char const *s1, char const *set)
{
	int	result;

	result = 0;
	if (!*s1)
		return (0);
	while (*s1)
	{
		if (!is_char_to_trim(*s1, set))
			break ;
		result++;
		s1++;
	}
	return (result);
}

static int	how_many_to_trim_b(char const *s1, char const *set)
{
	int	result;

	if (!*s1)
		return (0);
	result = 0;
	while (*s1)
		s1++;
	s1--;
	while (*s1)
	{
		if (!is_char_to_trim(*s1, set))
			break ;
		result++;
		s1--;
	}
	return (result);
}

static char	*empty_str(void)
{
	char	*result;

	result = (char *)malloc(1 * sizeof(char));
	if (!result)
		return (result);
	result[0] = 0;
	return (result);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		s1_length;
	int		i;
	int		trim_front;
	int		trim_back;

	if (!*s1)
		return (empty_str());
	s1_length = ft_strlen(s1);
	trim_back = how_many_to_trim_b(s1, set);
	trim_front = how_many_to_trim_f(s1, set);
	if (trim_front + trim_back >= s1_length)
		return (empty_str());
	result = (char *)malloc(s1_length - trim_front - trim_back + 1);
	if (!result)
		return (0);
	i = 0;
	while (i < s1_length - trim_back - trim_front)
	{
		result[i] = s1[i + trim_front];
		i++;
	}
	result[i] = '\0';
	return (result);
}
