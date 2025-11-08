/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibel-lot <ibel-lot@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 18:14:06 by ibel-lot          #+#    #+#             */
/*   Updated: 2025/10/31 17:58:13 by ibel-lot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	is_sep(char s, char c)
{
	return (s == c);
}

static int	count_word(char const *s, char c)
{
	int	prv;
	int	count;

	prv = 1;
	while (*s)
	{
		if (!is_sep(*s, c))
		{
			if (prv)
				count++;
			prv = 0;
		}
		else
			prv = 1;
		s++;
	}
	return (count);
}

static char	**free_all(char **s, int index)
{
	while (index >= 0)
	{
		free(s[index]);
		index--;
	}
	free(s);
	return (0);
}

static char	**ft_split_ret(char **res, const char *s, char c)
{
	int		i;
	int		start;
	int 	len;

	i = 0;
	while (*s)
	{
		start = 0;
		while (s[start] && is_sep(s[start], c))
			start++;
		len = start;
		while (s[len] && !is_sep(s[len], c))
			len++;
		if (start != len)
		{
			res[i] = ft_substr(s, start, len - start);
			if (!res[i])
				return (free_all(res, i));
			i++;
		}
		s = &s[len];
	}
	res[i] = 0;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		count;

	count = count_word(s, c);
	if (!count)
		return (0);
	res = malloc((sizeof(char *) * (count + 1)));
	if (!res)
		return (0);
	return (ft_split_ret(res, s, c));
}
