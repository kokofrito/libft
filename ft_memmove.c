#include "libft.h"

void *memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*d_ptr;
	unsigned char	*s_ptr;

	d_ptr = (unsigned char *)dest;
	s_ptr = (unsigned char *)src;
	if (d_ptr < s_ptr)
		return (void *memcpy(void *dest, const void *src, size_t n));
	while (len >= 0)
	{
		d_ptr[len] = s_ptr[len];
		len--;
	}
	return (dest);
}
