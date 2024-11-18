/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrahamsinsard <abrahamsinsard@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:09:57 by asinsard          #+#    #+#             */
/*   Updated: 2024/11/18 23:07:23 by abrahamsins      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_intlen(long int res)
{
	int	count;
	int	neg;

	count = 1;
	neg = 1;
	if (res < 0)
		neg *= -1;
	res *= neg;
	while (res >= 10)
	{
		res /= 10;
		count++;
	}
	return (count);
}

char	*ft_intis(long int res, int len, char *str)
{
	if (res < 0)
	{
		while (res != 0)
		{
			str[len] = 48 - (res % 10);
			res /= 10;
			len--;
		}
		str[len] = '-';
	}
	if (res > 0)
	{
		while (res != 0)
		{
			str[len] = (res % 10) + 48;
			res /= 10;
			len--;
		}
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			len;
	long int	res;

	res = n;
	len = ft_intlen(res);
	if (res < 0)
	{
		len += 1;
		str = malloc(sizeof(char *) * len + 1);
	}
	if (res >= 0)
		str = malloc(sizeof(char *) * len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	len--;
	if (res == 0)
	{
		str[len] = 48;
		return ((char *)str);
	}
	ft_intis(res, len, str);
	return (str);
}

/*int	main(void)
{
	printf("%s", ft_itoa(1000034));
	return (0);
}*/
