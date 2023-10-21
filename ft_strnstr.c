#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	//Programa hecho para que compile con las flags
	//Empezar desde cero
	size_t	i;

	i = 0;
	while (big[i] && little[i] && i < len)
		i++;
	return (NULL);
}
