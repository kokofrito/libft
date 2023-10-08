#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *strng;
	size_t i;

	strng = (unsigned char *)s;
	i = 0;
	while(i < n)
	{
		if (strng[i] == (unsigned char)c)
			return((void *)&strng[i]);
		i++;
	}
	return (NULL);
}
