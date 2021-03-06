/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simzam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 10:34:09 by simzam            #+#    #+#             */
/*   Updated: 2016/05/13 10:34:12 by simzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned long int		i;
	char	temp[n];

	i = -1;
	while ((++i) < n)
		temp[i] = *((char*)(src + i));
	i = -1;
	while ((++i) < n)
		*((char*)(dest + i)) = temp[i];
	return (dest);
}
