/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibel-lot <ibel-lot@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 18:00:09 by ibel-lot          #+#    #+#             */
/*   Updated: 2025/11/06 18:10:17 by ibel-lot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	char	*str;
	t_list	*node;

	if (!content)
		return (0);
	node = malloc(sizeof(t_list));
	if (!node)
		return (0);
	str = ft_strdup((char *)content);
	if (!str)
		return (0);
	node->content = (void *)str;
	node->next = 0;
	return (node);
}
