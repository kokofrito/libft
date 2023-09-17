#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*byte_ptr;

	byte_ptr = (unsigned char *)s;
	while (n > 0)
	{
		*byte_ptr = 0;
		byte_ptr++;
		n--;
	}
}
