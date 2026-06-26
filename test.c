#include "libft.h"
#include <stdio.h>
int main(void)
{
	char str[6];
	ft_memset(str,'A',5);
	str[5]='\0';
	printf("before:%s\n",str);
	ft_bzero(str,5);
	printf("after:%s\n",str);
	return(0);
}

