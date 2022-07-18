/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgetgood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 11:01:46 by jgetgood          #+#    #+#             */
/*   Updated: 2022/07/08 16:41:51 by jgetgood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t				size;
	char				*ptr;
	unsigned int		i;

	size = ft_strlen(src);
	ptr = malloc((size + 1) * sizeof(char));
	i = 0;
	if (!ptr)
	{
		return (0);
	}
	while (src[i])
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
