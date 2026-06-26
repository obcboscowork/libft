#include "libft.h"

static void	copy_forward(unsigned char *dst, const unsigned char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
}

static void	copy_backward(unsigned char *dst, const unsigned char *src, size_t len)
{
	size_t	i;

	i = len;
	while (i > 0)
	{
		i--;
		dst[i] = src[i];
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst && !src)
		return (NULL);
	if (dst < src)
		copy_forward((unsigned char *)dst, (const unsigned char *)src, len);
	else
		copy_backward((unsigned char *)dst, (const unsigned char *)src, len);
	return (dst);
}