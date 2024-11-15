/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asinsard <asinsard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 19:26:19 by asinsard          #+#    #+#             */
/*   Updated: 2024/11/14 19:06:19 by asinsard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*tmp;

	tmp = (char *)s;
	i = ft_strlen(tmp);
	while (i > 0)
	{
		if (tmp[i] == (char)c)
			return (&tmp[i]);
		else
			i--;
	}
	if (tmp[i] == (char)c)
		return (&tmp[i]);
	return (NULL);
}

/*int	main(void)
{
	const char *str1;
	const char *str2;
	int	i;
	int j;

	str1 = "";
	str2 = "";
	i = '0';
	j = '0';
	printf("%s\n", ft_strrchr(str1, i));
	printf("%s", strrchr(str2, j));
	return (0);
}*/
