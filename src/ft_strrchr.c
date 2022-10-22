/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrallo <nrallo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:46:33 by nrallo            #+#    #+#             */
/*   Updated: 2022/10/21 20:57:49 by nrallo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

char	*ft_strrchr(char const *str, int c)
{
	char *p;

	p = NULL;
	if(str != NULL)
		while (*str)
		{
			if(*str == (char)c)
				p = str;
			str++;	
		}
	if (*str == c)
		return ((char *)str);
	return (p);
}
