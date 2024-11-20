/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asinsard <asinsard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:52:27 by asinsard          #+#    #+#             */
/*   Updated: 2024/11/19 19:55:18 by asinsard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	void	*tab;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (size != 0 && nmemb > 2147483647 / size)
		return (NULL);
	tab = malloc(size * nmemb);
	if (tab == NULL)
		return (NULL);
	while (i < nmemb * size)
	{
		((char *)tab)[i] = '\0';
		i++;
	}
	return (tab);
}
/*int	main(void)
{
	int		i;
	size_t	tab;
	void	*all;

	i = 0;
	tab = 100;
	all = ft_calloc(tab, 16);
	while (i < (int)tab - 1)
	{
		printf("tab[%d] = 0\n", i);
		i++;
	}
	free(all);
}*/
