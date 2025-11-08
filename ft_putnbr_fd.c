/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibel-lot <ibel-lot@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 16:06:45 by ibel-lot          #+#    #+#             */
/*   Updated: 2025/11/05 17:25:25 by ibel-lot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long	long_n;
	char		c;

	long_n = n;
	if (long_n < 0)
	{
		long_n *= -1;
		write(fd, "-", 1);
	}
	if (long_n < 10)
	{
		c = long_n + 48;
		write(fd, &c, 1);
		return ;
	}
	ft_putnbr_fd(long_n / 10, fd);
	ft_putnbr_fd(long_n % 10, fd);
}
