/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibel-lot <ibel-lot@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 12:29:32 by ibel-lot          #+#    #+#             */
/*   Updated: 2025/10/30 16:51:29 by ibel-lot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*ft_strcpy(char *dst, const char *src)
{
	char	*res;

	res = dst;
	while (*src)
		*dst++ = *src++;
	return (res);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	res_len;
	char	*res;

	if (!s1 || !s2)
		return (0);
	res_len = ft_strlen(s1) + ft_strlen(s2);
	res = malloc(++res_len);
	if (!res)
		return (0);
	ft_strcpy(res, s1);
	ft_strlcat(res, s2, res_len + 1);
	return (res);
}
