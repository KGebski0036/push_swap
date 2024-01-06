/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:42:45 by kgebski           #+#    #+#             */
/*   Updated: 2023/05/23 14:46:47 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	unsigned char	*src;
	unsigned char	to_find;
	unsigned int	i;

	src = (unsigned char *)s;
	to_find = c;
	i = -1;
	while (++i < n)
	{
		if (src[i] == to_find)
			return (src + i);
	}
	return (0);
}
