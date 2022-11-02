/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrallo <nrallo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:10:56 by nrallo            #+#    #+#             */
/*   Updated: 2022/10/31 12:59:40 by nrallo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	j;
	unsigned int	i;

	j = 0;
	i = 0;
	while (dest[i] && i < size)
		i++;
	while ((src[j]) && ((i + j + 1) < size))
	{
		dest[j + i] = src[j];
		j++;
	}
	if (i != size)
		dest[j + i] = '\0';
	return (i + ft_strlen(src));
}  
