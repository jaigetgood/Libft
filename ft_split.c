/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgetgood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 16:02:09 by jgetgood          #+#    #+#             */
/*   Updated: 2022/08/26 19:27:59 by jgetgood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordcount(char const *s, char h)
{
	size_t	i;
	size_t	count;
	char	y;

	i = 0;
	count = 0;
	y = 1;
	while (s[i])
	{
		if (y && s[i] != h)
		{
			y = 0;
			count++;
		}
		else if (!y && s[i] == h)
			y = 1;
		i++;
	}
	return (count);
}

static char	*ft_string(char const **ss, char c)
{
	char	*str;
	size_t	i;

	i = 0;
	while (**ss && **ss == c)
		(*ss)++;
	while ((*ss)[i] && **ss == c)
		i++;
	str = ft_calloc(i + 1, sizeof(char));
	if (!str)
		return (NULL);
	ft_memcpy(str, *ss, i);
	*ss += i;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	count;
	size_t			i;
	char			**strs;

	i = 0;
	if (!s)
		return (NULL);
	count = ft_wordcount(s, c);
	strs = ft_calloc(count + 1, sizeof(char *));
	if (!strs)
		return (strs);
	while (i < count)
	{
		strs[i] = ft_string(&s, c);
		if (!strs[i])
			return (NULL);
		i++;
	}
	strs[i] = NULL;
	return (strs);
}
/*static void	ft_freeup(char *strs)
{
	int	i;

	i = 0;
	while (strs[i] != '\0')
	{
		free(strs);
		i++;
	}
	free(strs);
}

static int	ft_wordcount(char *str, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			word++;
			while (str[i] != c && str[i] != '\0')
				i++;
			if (str[i] == '\0')
				return (word);
		}
		i++;
	}
	return (word);
}

static void	ft_strcpy(char *word, char *str, char c, int j)
{
	int	i;

	i = 0;
	while (str[j + i] != '\0' && str[j] == c)
		j++;
	while (str[j + i] != c && str[j + i] != '\0')
	{
		word[i] = str[j + i];
		i++;
	}
	word[i] = '\0';
}

static char	*ft_stralloc(char *str, char c, int *k)
{
	char	*word;
	int		j;

	j = *k;
	word = NULL;
	while (str[*k] != '\0')
	{
		if (str[*k] != c)
		{
			while (str[*k] != '\0' && str[*k] != c)
				*k += 1;
			word = (char *)malloc(sizeof(char) * (*k + 1));
			if (word == NULL)
				return (NULL);
			break ;
		}
		*k += 1;
	}
	ft_strcpy(word, str, c, j);
	return (word);
}

char	**ft_split(const char *s, char c)
{
	char	**strs;
	int		i;
	int		j;
	int		pos;

	if (s == NULL)
		return (NULL);
	i = 0;
	pos = 0;
	j = ft_wordcount((char *)s, c);
	strs = (char **)malloc(sizeof(char *) * (j + 1));
	if (strs == NULL)
		return (NULL);
	strs[j] = NULL;
	while (i < j)
	{
		strs[i] = ft_stralloc(((char *)s), c, &pos);
		if (strs[i] == NULL)
		{
			ft_freeup(strs[i]);
		}
		i++;
	}
	return (strs);
}*/
