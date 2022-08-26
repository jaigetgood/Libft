/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgetgood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 13:40:53 by jgetgood          #+#    #+#             */
/*   Updated: 2022/08/26 19:15:54 by jgetgood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_find(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, char const *set)
{
	int		front;
	int		back;
	int		i;
	char	*result;

	if (!(s1 || set))
		return ((char *)s1);
	front = 0;
	while (s1[front] && ft_find(s1[front], set))
		front++;
	back = ft_strlen(s1);
	while (back > front && ft_find(s1[back - 1], set))
		back--;
	result = malloc((back - front + 1) * sizeof(*result));
	if (!result)
		return (NULL);
	i = 0;
	while (front < back)
		result [i++] = s1[front++];
	result[i] = '\0';
	return (&result[0]);
}
