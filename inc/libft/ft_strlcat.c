/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:48:04 by kgebski           #+#    #+#             */
/*   Updated: 2023/05/23 14:56:47 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dst, const char *src, unsigned int size)
{
	unsigned int	dst_length;
	unsigned int	src_length;
	unsigned int	remain_size;
	unsigned int	copy_length;

	src_length = ft_strlen(src);
	remain_size = size;
	while (*dst && remain_size > 0)
	{
		dst++;
		remain_size--;
	}
	dst_length = size - remain_size;
	if (remain_size > 0)
	{
		copy_length = remain_size - 1;
		if (src_length < copy_length)
		{
			copy_length = src_length;
		}
		ft_memcpy(dst, src, copy_length);
		dst[copy_length] = '\0';
	}
	return (dst_length + src_length);
}
