/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asinsard <asinsard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 19:37:14 by asinsard          #+#    #+#             */
/*   Updated: 2024/11/14 18:46:53 by asinsard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*str;

	i = 0;
	str = (const unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	s1[] = {0, 1, 2, 3, 4, 5};
	char	s2[] = {0, 1, 2, 3, 4, 5};

	printf("%s\n", (char *)ft_memchr(s1, 0, 1));
	printf("%s", (char *)memchr(s2, 0, 1));
	return (0);
}*/
