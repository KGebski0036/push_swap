/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:48:27 by kgebski           #+#    #+#             */
/*   Updated: 2023/05/23 16:52:22 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	s2_length;

	if (!*s2)
		return ((char *)(s1));
	if (!*s1)
		return (0);
	s2_length = ft_strlen(s2);
	while (*s1 + s2_length + 1 && n-- > s2_length - 1)
	{
		if (!ft_strncmp(s1, s2, s2_length))
			return ((char *)(s1));
		s1++;
	}
	return (0);
}
