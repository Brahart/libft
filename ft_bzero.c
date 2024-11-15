/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asinsard <asinsard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:24:22 by asinsard          #+#    #+#             */
/*   Updated: 2024/11/14 18:46:09 by asinsard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*tmp;
	size_t			i;

	tmp = s;
	i = 0;
	while (i < n)
	{
		tmp[i] = '\0';
		i++;
	}
}

/*int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while(str[len])
		len++;
	return (len);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	char	str[] = "Salut";
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(str);
	ft_bzero(str, 2);
	while (i < len)
	{
		ft_putchar(str[i]);
		i++;
	}
	return (0);
}*/
