/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgetgood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:43:47 by jgetgood          #+#    #+#             */
/*   Updated: 2022/07/08 16:09:04 by jgetgood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countdigits(long int n)
{
	unsigned int	count;

	count = 0;
	if (n < 0)
	{
		count++;
		n *= -1;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long int		num;
	int				sign;
	char			*res;
	unsigned int	digits;

	num = n;
	sign = 0;
	digits = countdigits(num);
	if (num < 0)
	{
		num *= -1;
		sign = -1;
	}
	res = ft_calloc((digits + 1), sizeof(char));
	if (!result)
		return (0);
	while (digits + sign)
	{
		result[digits - 1] = (num % 10 + '0');
		num /= 10;
		digits--;
	}
	return (res);
}
