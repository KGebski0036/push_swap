/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:42:50 by kgebski           #+#    #+#             */
/*   Updated: 2023/05/23 14:42:51 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	unsigned char	s1_uchr;
	unsigned char	s2_uchr;

	while (n--)
	{
		s1_uchr = *(unsigned char *) s1;
		s2_uchr = *(unsigned char *) s2;
		if (s1_uchr != s2_uchr)
			return (s1_uchr - s2_uchr);
		s1++;
		s2++;
	}
	return (0);
}
