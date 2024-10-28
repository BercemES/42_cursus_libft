/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:56:05 by bekinci-          #+#    #+#             */
/*   Updated: 2024/10/28 19:09:35 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//memset
#include <stdio.h>
#include "libft.h"
#include <fcntl.h>
/*

int main()
{
    char str[50] = "Merhaba, dünya!";

    // str dizisini sıfırlama
    printf("Önce: %s\n", str);
    
    // str dizisinin ilk 10 karakterini 'X' ile doldurma
    memset(str, 'X', 10);
    
    // Null terminatör ekleme
    str[10] = '\0';

    printf("Sonra: %s\n", str);

    return 0;
}


#include <stdio.h>

int main ()
{
	char str[] = "abcd";


 	printf("%s", ft_memset(str, 'a', 2));
	printf("\n");
	printf("%s", memset(str, 'a', 2));
	printf("\n\n");
	
	int s[] = {1,3,5,7,9};
	ft_memset(s, 258, 3);
	for (int i = 0; i < 5; i++)
	{
		printf("%d", s[i]);
		printf("\n");
	}
	printf("\n");
	int s1[] = {1,3,5,7,9};
	memset(s1, 258, 3);
		for (int i = 0; i < 5; i++)
	{
		printf("%d", s1[i]);
		printf("\n");
	}
	
	
	
}

*/

//bzero
/*
#include <stdio.h>

int main ()
{
	char str[] = "abcd";
	ft_bzero(str, 2);
	for (size_t i = 0; i < sizeof(str); i++)
	{
		printf("%c", str[i]);
	}

	printf("\n");
	
	char str2[] = "abcd";
	bzero(str2, 2);
	for (size_t i = 0; i < sizeof(str2); i++)
	{
		printf("%c", str2[i]);
	}	
}
*/
/*

#include <stdio.h>
#include <string.h>
int main()
{

	char dst[40];
	char src[] = "HelloWorld";
		
	memcpy(dst, src, 6);
	printf("%s\n", dst);


	char dst1[40];
	char src1[] = "Hello World";
		
	ft_memcpy(dst1, src1, 6);
	printf("%s", dst);

//int
	int dst[40];
	int src[] = {1,2,3,4};
		
	memcpy(dst, src, 6);
	for (size_t i = 0; i < 6; i++)
	{
		printf("%d", dst[i]);
	}
	printf("\n");
	int dst1[40];
	int src1[] = {1,2,3,4};
		
	ft_memcpy(dst1, src1, 6);
	for (size_t i = 0; i < 6; i++)
	{
		printf("%d", dst[i]);
	}

	return 0;
}*/

//memmove
/*
#include <string.h>
#include <stdio.h>

int main ()
{
	char dst[]= {"KASIMPATA"};
	char src[] = "KASIMPASA";	
	
	memmove(dst, src, 8);
	printf("%s\n", dst);
		
		
	char dst1[]= "Armut";
	char src1[] = "KAr";	
	
	ft_memmove(dst1, src1, 3);
	printf("%s\n\n", dst1);
	
//int
	char dst2[]= {1,2,3,3,6,7,8,9};
	char src2[] = {5,2,3,4};	
	
	memmove(dst2, src2, 4);
	for (size_t i = 0; i < sizeof(dst2); i++)
	{
		printf("%d", dst2[i]);
	}
		printf("\n");
		
	char dst3[]= {1,2,3,3,6,7,8,9};
	char src3[] = {5,2,3,4};	
	
	ft_memmove(dst3, src3, 4);
	for (size_t i = 0; i < sizeof(dst3); i++)
	{
		printf("%d", dst3[i]);
	}
	
}
*/

//memchr
/*
#include <string.h>
#include <stdio.h>

int main ()
{
	char dst[]= {"KASIMPATA"};	
	
	memchr(dst, 43, 4);
	printf("%c karakterinin bellek adresi: %p\n", 
	'H', memchr(dst, 'H', strlen(dst)));

	ft_memchr(dst, 43, 4);
	printf("%c karakterinin bellek adresi: %p\n", 
	'H', memchr(dst, 'H', strlen(dst)));	
}
*/

//memcmp

/*

#include <string.h>
#include <stdio.h>

int main ()
{
	char dst[]= "KAY";
	char src[] = "KAS";	
	
	int res = memcmp(dst, src, 3);
	if(res>0) printf("%d, dst bellek içeriği 
	src bellek içeriğinden buyuktur!", res);
    else if(res<0) printf("%d, src bellek 
	içeriği dst bellek içeriğinden kucuktur!", res);
    else printf("%d, dst bellek içeriği src 
	bellek içeriğine esittir!", res);

	printf ("\n");
	char dst1[]= "KAY";
	char src1[] = "KAS";	
	
	int res1 = ft_memcmp(dst1, src1, 3);
	if(res1>0) printf("%d, dest bellek içeriği 
	src bellek içeriğinden buyuktur!", res1);
    else if(res1<0) printf("%d, src bellek içeriği 
	dst bellek içeriğinden kucuktur!", res1);
    else printf("%d, dst bellek içeriği src 
	bellek içeriğine esittir!", res1);
}
*/

//strchr

/*
#include <string.h>
#include <stdio.h>

int main (void)
{
	char dst[]= "KAYIK";

	printf("%s\n", strchr(dst, 'A'));
	printf ("a\n");
	printf("%s\n", ft_strchr(dst, 'A'));
}
*/

//strrchr

/*
#include <string.h>
#include <stdio.h>

int main (void)
{
	char dst[]= "KAYIK AYI";

	printf("%s\n", strrchr(dst, 'A'));
	printf ("a\n");
	printf("%s\n", ft_strrchr(dst, 'A'));
}
*/

//strncmp
/*
#include <stdio.h>
#include <string.h>

int main() {
  char myStr1[] = "ABCe";
  char myStr2[] = "ABCd";
  int cmp = strncmp(myStr1, myStr2, 4);
  if (cmp > 0) {
    printf("%s is greater than %s\n", myStr1, myStr2);
  } else if (cmp < 0) {
    printf("%s is greater than %s\n", myStr2, myStr1);
  } else {
    printf("%s is equal to %s\n", myStr1, myStr2);
  }

  int cmp1 = ft_strncmp(myStr1, myStr2, 4);
  if (cmp1 > 0) {
    printf("%s is greater than %s\n", myStr1, myStr2);
  } else if (cmp1 < 0) {
    printf("%s is greater than %s\n", myStr2, myStr1);
  } else {
    printf("%s is equal to %s\n", myStr1, myStr2);
  }

  
  return 0;
}
*/
//strnstr
/*

#include <stdio.h>
#include <string.h>

int main() {
    const char *str = "Abdulkadir";
    char *ptr = ft_strnstr(str, "ula", 15);
	char *org_ptr = strnstr(str, "ula", 15);

    if (ptr) {
        printf("Alt dizi bulundu: %s\n", ptr);
    } else {
        printf("Alt dizi bulunamadı.\n");
    }

   if (org_ptr) {
        printf("Alt dizi bulundu: %s\n", org_ptr);
    } else {
        printf("Alt dizi bulunamadı.\n");
    }
	 printf("%s\n", ptr);
	 printf("%s\n", org_ptr);
    return 0;
}
*/
//strlcat
/*
#include <stdio.h>
#include <string.h>

int main() {
    char dst[20] = "Bey";
	const char *src = "Abdulkadir";

	printf("%zu: %s\n", ft_strlcat(dst, src, 5), dst);
	
	char dst1[20] = "Bey";
	const char *src1 = "Abdulkadir";
	
	printf("%zu: %s\n", strlcat(dst1, src1, 5), dst1);
	
    return 0;
}
*/
/*
SPLIT

#include <stdio.h>

int main ()
{
	char str[] = "deneme test blabla";
	char c = ' ';
	char **ptr;

	ptr = ft_split(str, c);
	int i = 0;
	while (i < 3)
	{
		printf("%s\n", ptr[i]);
		i++;
	}
	
}*/

// STRMAPI
/*
#include "libft.h"

char f(unsigned int i, char c)
{
	if(i % 2 == 0)
		return(c - 32);
	return (c);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;
	int				len;

	len = ft_strlen(s);
	str = (char *)ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}

#include <stdio.h>

int main()
{
	char *s = "deneme";
	printf("%s", ft_strmapi(s, f));
}
*/

//ft_putchr_fd
/*
int main ()
{
	int		fd;
	char	c;
	c = 't';

	fd = open("test.txt", O_CREAT | O_RDONLY | O_WRONLY, 0644);
	ft_putchar_fd(c, fd);
}
*/

/*
int main ()
{
	int		fd;
	char	c;
	c = 't';

	fd = open("test.txt", O_CREAT | O_RDONLY | O_WRONLY, 0644);
	ft_putnbr_fd(2147483647, fd);
}
*/

/*


#include <stdio.h>

int main()
{
	t_list	*new;
	char *content = "test";
	
	new = ft_lstnew(content);
	new->next = NULL;
	
	printf("%s", new->content);
}

*/

/*

#include <stdio.h>

int main()
{
	t_list	*first;
	t_list	*second;
	t_list	*lst;
	
	
	first = ft_lstnew(ft_strdup("a"));
	second = ft_lstnew(ft_strdup("b"));
	
	lst = first;
	ft_lstadd_front(&lst, second);
	printf("%s\n", lst->content);
	printf("%s\n", lst->next->content);
}
*/

/*

#include <stdio.h>

int main()
{
	t_list	*first;
	t_list	*second;
	t_list	*third;
	t_list	*lst;
	t_list	*last;
	
	first = ft_lstnew(ft_strdup("a"));
	second = ft_lstnew(ft_strdup("b"));
	third = ft_lstnew(ft_strdup("c"));
	
	first->next = second;
	second->next = third;
	third->next = NULL;
	
	lst = first;
	last = ft_lstlast(lst);
	printf("%s\n", last->content);
}
*/

// lstaddback
/*
#include <stdio.h>
#include <string.h>

int main()
{
	
    t_list *last;
	
	t_list *list1 = (t_list *)malloc(sizeof(t_list));
	t_list *list2 = (t_list *)malloc(sizeof(t_list));
    t_list *new = (t_list *)malloc(sizeof(t_list));

	list1->content = strdup("1");
	list2->content = strdup("2");
    new->content = strdup("3");
	
    list1->next = list2;
	list2->next = NULL;
    new->next = NULL;

	
	ft_lstadd_back(&list1, new);
    
	last = ft_lstlast(list1);

	printf("%s", last->content);
   
}
*/

//lstclear

/*

#include <stdio.h>
#include <string.h>

static void	del(void *str)
{
	free(str);
}

int main()
{
	
    t_list *lst;
	
	t_list *list1 = (t_list *)malloc(sizeof(t_list));
	t_list *list2 = (t_list *)malloc(sizeof(t_list));
    t_list *new = (t_list *)malloc(sizeof(t_list));

	list1->content = strdup("1");
	list2->content = strdup("2");
    new->content = strdup("3");
	
    list1->next = list2;
	list2->next = new;
    new->next = NULL;

	lst = list1;
	printf("%s\n", lst->content);
	
	ft_lstclear(&list2, del);
   
}
*/

//lstmap
/*
#include <stdio.h>

void	f(void *s)
{
	int i;
	char *str;

	str = (char *)s;
	i=0;
	while (str[i] != '\0')
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
}
int main()
{
	t_list	*lst;

	lst = ft_lstnew(ft_strdup("merhaba"));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("dunya")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("bercem")));

	ft_lstiter(lst, f);

	int i = 0;
	while (i < 3)
	{
		printf("%s\n", lst->content);
		lst = lst->next; 
		i++;
	}
		
}
*/

/*
/*
#include <stdio.h>
#include <string.h>
void del(void *s)
{
	free(s);
}

void *func(void *s)
{
	int i;
	char *str;

	str = (char *)s;
	i = 0;
	while (str[i] != '\0')
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
	return (str);
}

int main()
{
	char a[] = "merhaba";
	char b[] = "dunya";
	char c[] = "bercem";

	t_list *d = ft_lstnew(a);
	t_list *e = ft_lstnew(b);
	t_list *f = ft_lstnew(c);

	ft_lstadd_back(&d, e);
	ft_lstadd_back(&e, f);

	ft_lstmap(d, func, del);

	printf("%s\n%s\n%s\n", d->content, d->next->content, d->next->next->content);
	
}
*/
