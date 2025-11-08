/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibel-lot <ibel-lot@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 17:59:51 by ibel-lot          #+#    #+#             */
/*   Updated: 2025/11/02 15:35:55 by ibel-lot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_res(unsigned int n)
{
	int		len;

	len = 1;
	while (n / 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	fill_res(char **s, unsigned int n)
{
	if (n <= 9)
	{
		**s = n + 48;
		return ;
	}
	fill_res(s, n / 10);
	(*s)++;
	fill_res(s, n % 10);
}

char	*ft_itoa(int n)
{
	char			*res;
	char			*str;
	int				len;
	int				neg;
	unsigned int	long_n;

	neg = 0;
	long_n = n;
	if (n < 0)
	{
		neg = 1;
		long_n *= -1;
	}
	len = len_res(long_n);
	res = malloc(len + neg + 1);
	if (!res)
		return (0);
	str = res;
	if (neg)
		*res = '-';
	res = &res[neg];
	fill_res(&res, long_n);
	str[len + neg] = 0;
	return (str);
}
