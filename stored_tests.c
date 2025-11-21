// ---- GLOBAL VARIABLES ----
int g_uninit;                // in .bss (uninitialized global)
int g_init = 42;             // in .data (initialized global)
static int g_static = 99;    // in .data (static initialized global)
static char *g_str = "Global String"; // pointer in .data, string literal in .rodata

// ---- FUNCTION ----
void show_addresses(void)
{
    int local = 123;          // on stack
    static int s_local = 7;   // in .data
    int *heap_ptr = malloc(sizeof(int)); // on heap
    *heap_ptr = 456;

    printf("\n---- Memory Addresses ----\n");
    printf("Code (function)     : %p\n", (void*)show_addresses);
    printf(".data  g_init       : %p\n", (void*)&g_init);
    printf(".bss   g_uninit     : %p\n", (void*)&g_uninit);
    printf(".data  g_static     : %p\n", (void*)&g_static);
    printf(".rodata g_str literal: %p\n", (void*)g_str);
    printf("stack local         : %p\n", (void*)&local);
    printf("heap  heap_ptr      : %p\n", (void*)heap_ptr);

    free(heap_ptr);
}

int main(void)
{
    show_addresses();
    return 0;
}
// ft_lstlast
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
// ft_lstadd_front
	int a[] = {1,2,3,4,5,6,7};
	t_list *node0 = ft_lstnew(&a[0]);
	t_list *node1 = ft_lstnew(&a[1]);
	t_list *node2 = ft_lstnew(&a[2]);
	t_list *node3 = ft_lstnew(&a[3]);
	t_list *node4 = ft_lstnew(&a[4]);
	t_list *node5 = ft_lstnew(&a[5]);
	t_list *node6 = ft_lstnew(&a[6]);
	t_list *head = node0;
	ft_lstadd_front(&head,node1);
	ft_lstadd_front(&head,node2);
	ft_lstadd_front(&head,node3);
	ft_lstadd_front(&head,node4);
	ft_lstadd_front(&head,node5);
	ft_lstadd_front(&head,node6);

	while (head)
	{
		printf("%d\n",*(int *)head->content);
		head = head->next;
	}
// ft_lstadd_back
	int a[] = {1,2,3,4,5,6,7};
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
// ft_lstadd_front
	int a[] = {21};
	int b[] = {22};
	t_list *node = ft_lstnew(a);
	t_list *head = ft_lstnew(b);
	ft_lstadd_front(&head,node);
	printf("%d\n", *(int *)head->content);
	if (!head->next)
		printf("null\n");
	printf("%d\n", *(int *)node->content);
	if (!node->next)
		printf("null");
// ft_lstnew1
	char *str = "abcd";
	t_list *node = ft_lstnew(str);
	printf("%s\n",(char *)node->content);
	if (!node->next)
		printf("null");
// ft_lstnew2
	int a[] = {21};
	t_list *node = ft_lstnew(a);
	printf("%d\n", *(int *)node->content);
	if (!node->next)
		printf("null");
// ft_putnbr_fd
	int fd = open("test_fd.txt",O_WRONLY);
	printf("%d\n",fd);
	ft_putnbr_fd(INT_MIN,fd);
// ft_putendl_fd
	char *str = "737373737373737373e";
	int fd = open("test_fd.txt",O_WRONLY);
	printf("%d\n",fd);
	ft_putendl_fd(str,fd);
	ft_putendl_fd("d",fd);
// ft_putstr_fd
	char *str = "737373737373737373e";
	int fd = open("test_fd.txt",O_WRONLY);
	printf("%d\n",fd);
	ft_putstr_fd(str,fd);
//ft_putchar_fd
	int fd = open("tmp.c",O_WRONLY);
	printf("%d\n",fd);
	ft_putchar_fd(98,fd);
//ft_striteri
	void modify(unsigned int i, char *c)
	{
		*c += i;
	}
	char  s[] = "abcdefgh";
	printf("%s\n",s);
	printf("the treatement :\n");
	printf("%s\n",s);
	ft_striteri(s,modify);
	int i = 0;
	while (s[i])
	{
		printf("%d\n",s[i]);
		i++;
	}
//ft_strmpi
		char modify(unsigned int i, char c)
		{
			return (c + i);
		}
		char const *s = "abcdefgh";
		printf("%s\n",s);
		printf("the traitement :\n");
		char (*f)(unsigned int,char) = &modify;
		char *res = ft_strmpi(s,f);
		while (*res)
		{
			printf("%d\n",*res++);
		}
		char modify(unsigned int i, char c)
		{
			return (c + i);
		}
		char const *s = "abcdefgh";
		printf("%s\n",s);
		printf("the traitement :\n");
		char (*f)(unsigned int,char) = &modify;
		char *res = ft_strmpi(s,f);
		while (*res)
		{
			printf("%d\n",*res++);
		}
//ft_itoa 
	char *res = ft_itoa(0123);
	printf("%s\n",res);
	sprintf(res,"%d\n",0123);
	printf("%s\n",res);
	return 0;
//ft_split
	char *str = "ab,,,,,,,,,,,,,,,,,,,,,,,,,,,,ab";
	char **res = ft_split(str,',');
	for (int i = 0 ; i < 3; i++)
		printf("%s;", res[i]);
return 0;
//ft_strtrim
	char *str = "abcd";
	char *set = "";
	char *res = ft_strtrim(str,set);
	printf("len is :%zu \n", ft_strlen(res));
	printf("%s ", res);
	return 0;
//ft_substr
	char *s = "booba";
	for (int i = 0 ; i <7 ;   i ++)
		printf("%d ", s[i]);
	printf(",");
	char *res = ft_substr(s,0,3);
	int len = ft_strlen(res);
	printf("\nlen is : %d\n ",len);
	for (int i = 0 ; i < 10 ; i ++)
		printf("%d ", *res++);
//strdup
	char *res = strdup(0);
	for (int i = 0 ; i < 10 ; i ++)
		printf("%d ", *res++);
	return 0;
//calloc
	char *ptr = (char *)ft_calloc(10,10);
	for (int i = 0 ; i < 10 ; i ++)
		printf("%d ", *ptr++);
	printf(",");
	char *p = (char *)calloc(10,10);
	for (int i = 0 ; i < 10 ; i ++)
		printf("%d ", *p++);
	return 0;

//atoi
	printf("%d\n",ft_atoi("                          \n				--123"));		
//strnstr
	ft_strnstr("abcdef","cd",2);
	strnstr("abcdef","cd",2);
//memcmp
	char *s1 = "wccdefgh";
	char *s2 = "aacdefgh";
	printf("%d\n",ft_memcmp(NULL,(void *)s2,1));
	printf("%d\n",memcmp(NULL,(void *)s2,0));
	return 0;
//ft_strncmp
	char s1[] = "bbcdcc0ba";
	char s2[] = "bbccccch";
	printf("%d\n" ,ft_strncmp(s1,s2,5));	
//ft_strrchr ,ft_strchr
	printf("%s\n" ,ft_strchr(0,98));
	printf("%s\n" ,ft_strrchr(s,98));
	printf("%s , %s" ,ft_strrchr(s,0),ft_strchr(s,0));
//ft_toupper,ft_tolower
	printf("%d\n" ,ft_toupper(101));
	printf("%d\n" ,ft_toupper(150));
	printf("%d\n" ,ft_tolower(90));
	printf("%d\n" ,ft_tolower(97));
//strcat
char src[] = "yassinenaji";
	char dst[20] = "hamzahamza";
	printf("%s\n",dst);
	printf("%zu\n" ,ft_strlcat(dst,src,sizeof(dst)));
	printf("%s\n",dst);
	char dst1[20] = "hamzahamza";
	printf("%s\n",dst1);
	printf("%d\n" ,strlcat(dst1,src,sizeof(dst1)));
	printf("%s\n",dst1);
//strlcpy
	char src[] = "yassinenaji";
	char dst[] = "hamzahamza";
	printf("%s\n",dst);
	printf("%zu\n" ,ft_strlcpy(dst,src,5));
	printf("%s\n",dst);
	char dst1[] = "hamzahamza";
	printf("%s\n",dst1);
	printf("%d\n" ,strlcpy(dst1,src,5));
	printf("%s\n",dst1);
//bzero
	char s[] = "abc";
	printf("\narray: {");
	for (int i = 0 ; i < 4 ; i++)
	{	if (i > 0)
			printf(",");
		printf("%d",s[i]);
	}
	printf("}");
	ft_bzero(s,3);
	printf("\nresult: {");
	for (int i = 0 ; i < 4 ; i++)
	{	if (i > 0)
			printf(",");
		printf("%d",s[i]);
	}
	printf("}");

//memmove
	char ch[] = "abcd";
	printf("\narray: {");
	for (int i = 0 ; i < 4 ; i++)
	{	if (i > 0)
			printf(",");
		printf("%d",s[i]);
	}
	printf("}");
	ft_memmove(s,3);
	printf("\nresult: {");
	for (int i = 0 ; i < 4 ; i++)
	{	if (i > 0)
			printf(",");
		printf("%d",s[i]);
	}
	printf("}");
	printf("\narray: {");
	for (int i = 0 ; i < 4 ; i++)
		printf("%d,",arr[i]);
	printf("}");
	printf("\nresult: {");
	ft_bzero(arr, 4);
	for (int i = 0 ; i < 4 ; i++)
		printf("%d,",arr[i]);
	printf("}");
//memset
	printf("\n");
	int	ar[4] = {1,2,3,4};
	for (int i = 0 ; i < 4 ; i++)
		printf("%d,",ar[i]);
	printf("\nresult: {");
	ft_memset(ar,0, 8);
	for (int i = 0 ; i < 4 ; i++)
		printf("%d,",ar[i]);
	printf("}");
