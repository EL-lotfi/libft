/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibel-lot <ibel-lot@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 22:40:01 by ibel-lot          #+#    #+#             */
/*   Updated: 2025/10/26 16:49:08 by ibel-lot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*res;
	char	*little_to_first;

	little_to_first = (char *)little;
	res = (char *)big;
	if (!*little)
		return (res);
	while (len--)
	{
		while (*(char *)big == *(char *)little)
		{
			big++;
			little++;
		}
		if (!*little)
		{
			return (res);
		}
		little = little_to_first;
		big = ++res;
	}
	return (0);
}
