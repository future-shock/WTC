/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simzam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 10:29:15 by simzam            #+#    #+#             */
/*   Updated: 2016/05/13 10:29:26 by simzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
