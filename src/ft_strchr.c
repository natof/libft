/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrallo <nrallo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:46:33 by nrallo            #+#    #+#             */
/*   Updated: 2022/10/21 20:57:14 by nrallo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"
#include <stdio.h>

char	*ft_strchr(char const *str, int c)
{
	while (*str != '\0')
	{
		if(*str == (char)c)
			return ((char *)str);
		str++;
	}
	if (*str == c)                                                                                                     
    {                                                                                                                      
         return ((char *)str);
    }
	return (NULL);
}
