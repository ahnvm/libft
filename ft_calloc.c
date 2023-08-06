/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acan <ahmetabdullahcan@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 11:42:59 by acan              #+#    #+#             */
/*   Updated: 2023/07/28 17:04:16 by acan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_calloc(int count)
{
	char	*a;
	int		i;

	i = 0;
	a = malloc(count);
	if (!a)
		return (NULL);
	while (i < count)
	{
		a[i] = 0;
		i++;
	}
	return (a);
}
