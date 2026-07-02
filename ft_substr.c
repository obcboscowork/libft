#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *str;
    size_t  s_len;

    s_len = ft_strlen(s);
    if (len > s_len - start)
        len = s_len - start;
    str = malloc(len + 1);
    if (str == NULL)
        return (NULL);
    ft_memcpy(str, s + start, len);
    str[len] = '\0';
    return (str);
}

	
