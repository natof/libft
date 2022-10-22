/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrallo <nrallo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:58:45 by nrallo            #+#    #+#             */
/*   Updated: 2022/10/20 15:48:05 by nrallo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

void *ft_memcpy(void *dest, const void *src, unsigned int n)
{
	int		i; 
	char	*a;
	char	*b;
	
	a = (char *)src;
	b = (char *)dest;

	if(!(dest || src))
		return (NULL);
	i = -1;
	while (++i != n)
		b[i] = a[i];
	return (dest);
}
