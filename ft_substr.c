/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibel-lot <ibel-lot@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 11:03:32 by ibel-lot          #+#    #+#             */
/*   Updated: 2025/10/30 16:47:21 by ibel-lot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		sub_size;
	char	*res;
	int		i;

	if (!s)
		return (0);
	sub_size = 0;
	while (s[sub_size] && len - sub_size)
		sub_size++;
	res = malloc(sub_size + 1);
	if (!res)
		return (0);
	i = 0;
	while (s[start] && len--)
		res[i++] = s[start++];
	res[i] = 0;
	return (res);
}
