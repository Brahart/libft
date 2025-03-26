/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asinsard <asinsard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 21:23:54 by asinsard          #+#    #+#             */
/*   Updated: 2025/03/24 15:12:14 by asinsard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_error(const char *s, int error)
{
	if (!s)
		return ;
	ft_putstr_fd(BOLD_RED, 2);
	ft_putendl_fd("ERROR", 2);
	ft_putstr_fd(s, 2);
	ft_putendl_fd(STOP_COLOR, 2);
	if (error != 0)
		exit(error);
}
