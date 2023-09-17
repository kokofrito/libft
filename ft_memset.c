#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*byte_ptr;
	unsigned char	byte_value;

	byte_ptr = (unsigned char *)s;
	byte_value = (unsigned char)c;
	while (n > 0)
	{
		*byte_ptr = byte_value;
		byte_ptr++;
		n--;
	}
	return (s);
}
