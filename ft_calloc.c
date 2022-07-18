/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgetgood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:06:57 by jgetgood          #+#    #+#             */
/*   Updated: 2022/07/08 16:08:49 by jgetgood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	int		length;

	length = size * count;
	ptr = malloc(length);
	if (!ptr)
		return (0);
	ft_bzero(ptr, length);
	return (ptr);
}
