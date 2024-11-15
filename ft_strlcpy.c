/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asinsard <asinsard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:36:04 by asinsard          #+#    #+#             */
/*   Updated: 2024/11/14 18:49:53 by asinsard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	len = 0;
	i = 0;
	while (src[len])
		len++;
	if (size == 0)
		return (len);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

/*// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

int	main(int ac, char **av)
{
	size_t	n = 20;
	int	i;
	int	len;

	i = 0;
	len = strlen(av[1]);
	if (ac == 3)
	{
		// printf("%ld\n", strlcpy(av[1], av[2], n));
		printf("%ld\n", ft_strlcpy(av[1], av[2], n));
		// ft_strlcpy(av[1], av[2], n);
		printf("%s", av[1]);
		// while (av[1][i])
		// {
		// 	ft_putchar(av[1][i]);
		// 	i++;
		// }
		// strlcpy(av[1], av[2], n);
		// while (av[1][i])
		// {
		// 	ft_putchar(av[1][i]);
		// 	i++;
		// }
	}
	else
		return (0);
}*/
