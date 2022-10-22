/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrallo <nrallo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:03:38 by nrallo            #+#    #+#             */
/*   Updated: 2022/10/21 18:50:13 by nrallo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

void *ft_memmove(void *dest, const void * src, unsigned int n)
{
	int		i; 
	char	*a;
	char	*b;
	
	a = (char *)src;
	b = (char *)dest;
	i = 0;
	if(!(dest || src))
		return (NULL);
	if(b > a)
	{
		while (n-- > 0)
			b[n] = a[n];
	}
	else
	{	
		i = -1;
		while (++i != n)
			b[i] = a[i];
	}
	
	return (dest);
}