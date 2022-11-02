/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrallo <nrallo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:21:19 by nrallo            #+#    #+#             */
/*   Updated: 2022/10/31 14:12:49 by nrallo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include <stdio.h>
#include "./libft.h"

char *ft_substr(char const *src, unsigned int start, unsigned int len)
{
    int i;
    char *dest;
    int size;

    size = ft_strlen((char *)src + start);
    if (size < len)
        len = size;
    if ((unsigned int)ft_strlen((char *)src) < start)
        return (ft_strdup(""));
    dest = (char *)malloc(sizeof(char) * (len + 1));
    if(dest == NULL)
        return NULL;
    i = 0;
    if(start <= ft_strlen((char *)src))
    {
	    while (i != len && src[start] != '\0')
	    {
	    	dest[i++] = src[start];
	    	start++;
	    }
    }
    dest[len] = '\0';
    return (dest);
}
