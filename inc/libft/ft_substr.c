/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:48:40 by kgebski           #+#    #+#             */
/*   Updated: 2023/05/23 20:51:13 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, unsigned int len)
{
	unsigned int	distanse_to_end_of_s;
	int				result_size;
	char			*substring;
	unsigned int	s_lenght;

	s_lenght = ft_strlen(s);
	if (start > s_lenght)
		distanse_to_end_of_s = 0;
	else
	{
		s += start;
		distanse_to_end_of_s = ft_strlen(s);
	}
	if (distanse_to_end_of_s < len)
		result_size = distanse_to_end_of_s;
	else
		result_size = len;
	substring = (char *)malloc((result_size + 1));
	if (!substring)
		return (0);
	ft_strlcpy(substring, s, result_size + 1);
	return (substring);
}
