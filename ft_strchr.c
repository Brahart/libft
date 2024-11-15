/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asinsard <asinsard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 19:07:15 by asinsard          #+#    #+#             */
/*   Updated: 2024/11/14 18:49:17 by asinsard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int			i;
	const char	*tmp;

	i = 0;
	tmp = (const char *)s;
	while (tmp[i])
	{
		if (tmp[i] == (char)c)
			return ((char *)&tmp[i]);
		else
			i++;
	}
	if (tmp[i] == (char)c)
		return ((char *)&tmp[i]);
	return (NULL);
}

/*int	main(void)
{
	const char	*str1;
	const char	*str2;
	int			i;
	int			j;

	str1 = "tripouille";
	str2 = "tripouille";
	i = 't' + 256;
	j = 't' + 256;
	printf("%s\n", ft_strchr(str1, i));
	printf("%s", strchr(str2, j));
	return (0);
}*/
