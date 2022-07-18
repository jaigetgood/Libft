/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgetgood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 15:57:03 by jgetgood          #+#    #+#             */
/*   Updated: 2022/07/18 17:05:13 by jgetgood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*dstc;
	char	*srcc;

	dstc = (char *)dst;
	srcc = (char *)src;
	if (dst == src)
		return (dst);
	if (srcc < dstc)
	{
		while (n--)
			*(dstc + n) = *(srcc + n);
		return (dst);
	}
	while (n--)
		*dstc++ = *srcc++;
	return (dst);
}
