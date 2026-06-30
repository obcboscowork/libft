#include "libft.h"

int ft_memcmp(const void *s1,const void *s2,size_t n)
{
	unsigned char *ptr = (unsigned char *)s1;
	unsigned char *ptr1 = (unsigned char *)s2;

	size_t i ;
	i = 0;
	
	while(i < n)
	{
		if(ptr[i] != ptr1[i])
			return(ptr[i]-ptr1[i]);
		i++;
	}
	return(0);
}


