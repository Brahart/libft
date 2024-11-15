/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asinsard <asinsard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:44:17 by asinsard          #+#    #+#             */
/*   Updated: 2024/11/14 19:05:18 by asinsard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*tmp1;
	char		*tmp2;
	size_t		i;

	tmp1 = src;
	tmp2 = dest;
	i = 0;
	if (dest > src)
	{
		while (n > i)
		{
			tmp2[n - 1] = tmp1[n - 1];
			n--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

/*int	main(void)
{
	const char	str1[] = "123456789";
	char		str2[] = "123456789";

	// printf("%s\n", ft_memmove(str1 + 2, str1, 7));
	// printf("%s\n", ft_memcpy(str1 + 2, str1, 7));
	printf("vrai memmove %s\n", memmove(str1 + 2, str1, 7));
	printf("vrai memcpy %s\n", memcpy(str1 + 2, str1, 7));
	printf("%s\n", ft_memmove(str1, str1, 7));
	printf("%s\n", ft_memcpy(str1, str1, 7));
	printf("vrai memmove %s\n", memmove(str1, str1, 7));
	printf("vrai memcpy %s", memcpy(str1, str1, 7));
	return (0);
}*/
