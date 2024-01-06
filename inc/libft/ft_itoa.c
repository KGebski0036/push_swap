/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgebski <kgebski@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:40:29 by kgebski           #+#    #+#             */
/*   Updated: 2023/05/23 20:49:56 by kgebski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	get_length_of_number(int n)
{
	int		result;
	long	devider;
	long	number;

	result = 1;
	devider = 10;
	number = (long)n;
	if (number < 0)
		result = 2;
	while (number / devider != 0)
	{
		devider *= 10;
		result++;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		i;
	int		is_negative;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	is_negative = 0;
	i = get_length_of_number(n);
	result = (char *)malloc(i + 1);
	if (!result)
		return (0);
	result[i] = '\0';
	if (n < 0)
	{
		is_negative = 1;
		n = -n;
	}
	while (--i >= 0)
	{
		result[i] = n % 10 + '0';
		n /= 10;
	}
	if (is_negative)
		result[0] = '-';
	return (result);
}
