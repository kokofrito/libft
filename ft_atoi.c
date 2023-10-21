#include "libft.h"

int	space_exist(char c)
{
	if (c >= 9 && c <= 13)
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	n;
	int	i;
	int	signo;

	n = 0;
	i = 0;
	signo = 1;
	while (space_exist(nptr[i]))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			signo = -1;
		i++;
	}
	while (nptr[i] <= '9' && nptr[i] >= '0' )
	{
		n = n * 10 + (nptr[i]) - 48;
		i++;
	}
	return (n * signo);
}
