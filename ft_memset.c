/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asinsard <asinsard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:29:48 by asinsard          #+#    #+#             */
/*   Updated: 2024/11/14 18:48:47 by asinsard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*tmp;

	tmp = s;
	i = 0;
	while (i < n)
	{
		tmp[i] = c;
		i++;
	}
	return (s);
}

/*int	main(void)
{
	unsigned char	str[] = "              ";
	unsigned char   str1[] = "              ";

	printf("%s|\n", ft_memset(str, 'A', 8));
	printf("%s|", memset(str1, 'a', 4));
	return (0);
}*/
