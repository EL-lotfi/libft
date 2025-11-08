/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibel-lot <ibel-lot@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 16:53:18 by ibel-lot          #+#    #+#             */
/*   Updated: 2025/10/30 22:41:36 by ibel-lot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	exist_in(char c, const char *set)
{
	int		i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len_s1;
	int		start;
	char	*res;

	len_s1 = ft_strlen(s1);
	if (!s1 || !set)
		return (0);
	start = 0;
	while (s1[start] && exist_in(s1[start], set))
	{
		start++;
	}
	len_s1--;
	while (len_s1 && exist_in(s1[len_s1], set))
	{
		len_s1--;
	}
	res = ft_substr(s1, start, len_s1 - start + 1);
	return (res);
}
