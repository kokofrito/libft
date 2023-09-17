/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoisac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 13:19:16 by amoisac           #+#    #+#             */
/*   Updated: 2023/09/17 13:31:59 by amoisac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *strrchr(const char *s, int c)
{
	int i;
	char *ptr;

	i = 0;
	
	ptr = (unsigned char *)s;
	while(s[i] != 0)
	{
		if (s[i] == c)
			return (ptr + i);
	}
	if (c == 0)
		return (ptr + i);
	return (0);
}