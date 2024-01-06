/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:47:50 by kgebski           #+#    #+#             */
/*   Updated: 2023/05/23 14:56:40 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new_str;
	int		s_length;

	s_length = ft_strlen(s) + 1;
	new_str = (char *)malloc(s_length * sizeof(char));
	if (!new_str)
		return (0);
	ft_memcpy(new_str, s, s_length * sizeof(char));
	return (new_str);
}
