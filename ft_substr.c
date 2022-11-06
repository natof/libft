/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrallo <nrallo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:21:19 by nrallo            #+#    #+#             */
/*   Updated: 2022/11/04 18:45:31 by nrallo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include <stdio.h>
#include "./libft.h"

static char *_return_empty(void)
{
    char    *output;

    output = malloc(sizeof(char));
    if (output == NULL)
        return (NULL);
    *output = '\0';
    return (output);
}

char *ft_substr(char const *src, unsigned int start, unsigned int len)
{
    unsigned int i;
    char *dest;
    unsigned int size;
    unsigned int j;
    
    
    if (ft_strlen(src) == 0 || start > ft_strlen(src) || len == 0)
        return (_return_empty());
    size = ft_strlen((char *)src + start);
    if (size < len)
        len = size;
    if(!src || !(dest = (char *)malloc(sizeof(char) * (len + 1))))
        return (NULL);
    j = 0;
    i = start;
    while (i < ft_strlen(src) && j < len)
	{
        dest[j++] = src[i++];
	}
    dest[j] = '\0';
    return (dest);
}
