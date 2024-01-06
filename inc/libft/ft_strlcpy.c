/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:48:09 by kgebski           #+#    #+#             */
/*   Updated: 2023/05/23 14:56:49 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int size)
{
	int	src_length;
	int	i;

	src_length = ft_strlen(src);
	i = -1;
	if (!size)
		return (src_length);
	while (src[++i] && --size)
	{
		dst[i] = src[i];
	}
	dst[i] = '\0';
	return (src_length);
}
