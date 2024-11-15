/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asinsard <asinsard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:22:08 by asinsard          #+#    #+#             */
/*   Updated: 2024/11/14 18:50:13 by asinsard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i] && i + j < n)
	{
		while (big[i + j] == little[j] && i + j < n)
		{
			j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}

/*int	main (void)
{
	printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15));
	printf("%s", strnstr("lorem ipsum dolor sit amet", "dolor", 15));
	return (0);
}*/
