/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asinsard <asinsard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 19:26:19 by asinsard          #+#    #+#             */
/*   Updated: 2024/11/14 13:13:04 by asinsard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
		return (c);
	}
	else
		return (c);
}

/*int	main(void)
{
	printf("%c\n", ft_toupper('a'));
	printf("%c", ft_toupper('2'));
	return(0);
}*/
