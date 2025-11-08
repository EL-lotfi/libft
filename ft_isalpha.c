/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibel-lot <ibel-lot@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 18:27:57 by ibel-lot          #+#    #+#             */
/*   Updated: 2025/10/25 11:18:24 by ibel-lot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isupper(int n)
{
	if (n >= 65 && n <= 90)
		return (1);
	return (0);
}

static int	ft_islower(int n)
{
	if (n >= 97 && n <= 122)
		return (1);
	return (0);
}

int	ft_isalpha(int n)
{
	if (ft_isupper(n) || ft_islower(n))
		return (1);
	return (0);
}
