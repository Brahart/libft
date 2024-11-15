/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asinsard <asinsard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:26:18 by asinsard          #+#    #+#             */
/*   Updated: 2024/11/14 20:08:20 by asinsard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	lend;
	size_t	lens;
	size_t	i;

	lend = ft_strlen((const char *)dest);
	lens = ft_strlen(src);
	i = 0;
	if (size <= lend)
		return (size + lens);
	while (src[i] && i < size - lend - 1)
	{
		dest[lend + i] = src[i];
		i++;
	}
	dest[lend + i] = '\0';
	return (lend + lens);
}
/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	size_t	n = 20;
	int	i;
	int	len;

	i = 0;
	len = strlen(av[1]);
	if (ac == 3)
	{
		printf("%ld\n", strlcat(av[1], av[2], n));
		printf("%ld\n", ft_strlcat(av[1], av[2], n));
		ft_strlcat(av[1], av[2], n);
		while (i < 20)
		{
			ft_putchar(av[1][i]);
			i++;
		}
		strlcat(av[1], av[2], n);
		while (i < 20)
		{
			ft_putchar(av[1][i]);
			i++;
		}
	}
	else
		return (0);
}*/
