/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:46:56 by kgebski           #+#    #+#             */
/*   Updated: 2023/05/23 20:45:53 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void	*src, unsigned int n)
{
	unsigned char		*area_dest;
	const unsigned char	*area_src;

	area_dest = dest;
	area_src = src;
	if (dest == src)
		return (dest);
	while (n--)
	{
		*area_dest++ = *area_src++;
	}
	return (dest);
}
