#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d_ptr;
	unsigned char	*s_ptr;

	d_ptr = (unsigned char *)dest;
	s_ptr = (unsigned char *)src;
	while (n > 0)
	{
		*d_ptr = *s_ptr;
		d_ptr++;
		s_ptr++;
		n--;
	}
	return (dest);
}

