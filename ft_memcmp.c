/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asinsard <asinsard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:52:44 by asinsard          #+#    #+#             */
/*   Updated: 2024/11/14 18:46:56 by asinsard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	i = 0;
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] < str2[i])
			return (str1[i] - str2[i]);
		else if (str1[i] > str2[i])
			return (str1[i] - str2[i]);
		else
			i++;
	}
	return (0);
}

/*int	main(void)
{
	const char	*s1;
	const char	*s2;
	const char	*s3;
	const char	*s4;

	s1 = "test";
	s2 = "teste";
	s3 = "test";
	s4 = "teste";
	printf("%d\n", ft_memcmp(s1, s2, 10));
	printf("%d", memcmp(s3, s4, 10));
	return (0);
}*/
