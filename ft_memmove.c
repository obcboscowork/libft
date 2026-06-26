#include "libft.h"
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*ptr;
	const unsigned char	*ptr1;
	size_t				i;

	if (!dst && !src)
		return (NULL);
	ptr = (unsigned char *)dst;
	ptr1 = (const unsigned char *)src;
	if (dst < src)
	{
		i = 0;
		while (i < len)
		{
			ptr[i] = ptr1[i];
			i++;
		}
	}
	else
	{
		i = len;
		while (i > 0)
		{
			i--;
			ptr[i] = ptr1[i];
		}
	}
	return (dst);
}
