#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>
#include <stdlib.h>
#include <limits.h>
#include <fcntl.h>
#include <stdint.h>

int main ()
{

	int a[] = {1,2,3,4,5,6,9};
	t_list *node0 = ft_lstnew(&a[0]);
	t_list *node1 = ft_lstnew(&a[1]);
	t_list *node2 = ft_lstnew(&a[2]);
	t_list *node3 = ft_lstnew(&a[3]);
	t_list *node4 = ft_lstnew(&a[4]);
	t_list *node5 = ft_lstnew(&a[5]);
	t_list *node6 = ft_lstnew(&a[6]);
	t_list *head = node0;
	ft_lstadd_back(&head,node1);
	ft_lstadd_back(&head,node2);
	ft_lstadd_back(&head,node3);
	ft_lstadd_back(&head,node4);
	ft_lstadd_back(&head,node5);
	ft_lstadd_back(&head,node6);

	t_list *res = ft_lstlast(head);
	if (!res)
		printf("(null)");
	else
		printf("%d\n",*(int *)res->content);

}
