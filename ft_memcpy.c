#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*ptr;
	const unsigned char	*ptr1;
	size_t				i;

	ptr = (unsigned char *)dst;
	ptr1 = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		ptr[i] = ptr1[i];
		i++;
	}
	return (dst);
}
