/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibel-lot <ibel-lot@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:33:29 by ibel-lot          #+#    #+#             */
/*   Updated: 2025/10/25 11:01:14 by ibel-lot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		flag;
	char	*ptr;

	flag = 0;
	ptr = (char *)s;
	while (*s)
	{
		if (*(unsigned char *)s == (unsigned char) c)
		{
			ptr = (char *)s;
			flag = 1;
		}
		s++;
	}
	if (c == 0)
		return ((char *)s);
	if (flag == 1)
		return (ptr);
	return (0);
}
