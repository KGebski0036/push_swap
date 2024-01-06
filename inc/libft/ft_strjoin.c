/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:47:59 by kgebski           #+#    #+#             */
/*   Updated: 2023/05/23 14:56:44 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1_length;
	int		s2_length;
	char	*result;
	int		i;

	s1_length = ft_strlen(s1);
	s2_length = ft_strlen(s2);
	result = (char *)malloc(s2_length + s1_length + 1);
	if (!result)
		return (0);
	i = -1;
	while (s1[++i])
		result[i] = s1[i];
	while (s2[i - s1_length])
	{
		result[i] = s2[i - s1_length];
		i++;
	}
	result[i] = '\0';
	return (result);
}
