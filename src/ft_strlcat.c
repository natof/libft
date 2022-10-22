/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrallo <nrallo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:10:56 by nrallo            #+#    #+#             */
/*   Updated: 2022/10/20 15:41:34 by nrallo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len;

	if(!size)
		return (0);

	len = ft_strlen(dest);
	if (size <= len)
	{
		return (size + ft_strlen(src));
	}
	size -= len + 1;
	while (*src && size-- > 0)
	{
		dest[len++] = *src++;
		dest[len] = 0;
	}
	return (len + ft_strlen(src));
}  
