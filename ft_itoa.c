/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asinsard <asinsard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:09:57 by asinsard          #+#    #+#             */
/*   Updated: 2024/11/18 19:22:13 by asinsard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_intlen(int n)
{
	size_t	count;

	count = 1;
	while (n >= 10)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	unsigned char	*str;
	int				len;

	len = ft_intlen(n);
	str = malloc(sizeof(char *) * len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	len--;
	if (n == 0)
	{
		str[len] = 48;
		return ((char *)str);
	}
	while (n != 0)
	{
		str[len] = (n % 10) + 48;
		n /= 10;
		len--;
	}
	return ((char *)str);
}

/*int	main(void)
{
	printf("%s", ft_itoa(-555));
	return (0);
}*/
