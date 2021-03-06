/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfilahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 11:24:03 by mfilahi           #+#    #+#             */
/*   Updated: 2018/10/21 11:35:18 by mfilahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isxdigit(int c)
{
	if ((ft_isdigit(c)) || (c >= 'A' && c <= 'F') ||
			(c >= 'a' && c <= 'f'))
		return (1);
	return (0);
}
