/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:48:32 by kgebski           #+#    #+#             */
/*   Updated: 2023/05/23 14:57:01 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_chr;
	char	cc;

	cc = (char)c;
	last_chr = 0;
	while (*s)
	{
		if (*s == cc)
			last_chr = (char *) s;
		s++;
	}
	if (*s == cc)
		last_chr = (char *) s;
	return (last_chr);
}
