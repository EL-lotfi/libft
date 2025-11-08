/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibel-lot <ibel-lot@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 09:51:51 by ibel-lot          #+#    #+#             */
/*   Updated: 2025/10/30 10:24:59 by ibel-lot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*res;
	int		i;

	i = 0;
	len = ft_strlen(s);
	res = malloc(len + 1);
	if (!res)
		return (0);
	while (*s)
		res[i++] = *s++;
	res[i] = 0;
	return (res);
}
