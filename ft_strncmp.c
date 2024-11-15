/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asinsard <asinsard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 09:40:17 by asinsard          #+#    #+#             */
/*   Updated: 2024/11/14 18:50:02 by asinsard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, int size)
{
	int				i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (size < 0)
		return (-1);
	while (i < size && (str1[i] || str2[i]))
	{
		if (str1[i] < str2[i])
			return (-1);
		else if (str1[i] > str2[i])
			return (1);
		else
			i++;
	}
	return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_strncmp("abcdef", "abc\xfdxx", 7));
	printf("%d", strncmp("abcdef", "abc\xfdxx", 7));
	return (0);
}*/
