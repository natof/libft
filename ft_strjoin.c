/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrallo <nrallo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:20:45 by nrallo            #+#    #+#             */
/*   Updated: 2022/11/04 19:37:12 by nrallo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "./libft.h"
#include <stdio.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    char *dest;
    unsigned int len;

    if(s1 == NULL || s2 == NULL)
        return (NULL);
    len = ft_strlen(s1) + ft_strlen(s2);
    dest = malloc((len + 1) * sizeof(char));
    if(dest == NULL)
        return (NULL);
    while (*s1 != '\0')
        *dest++ = *s1++;
    while (*s2 != '\0')
        *dest++ = *s2++;  
    *dest = '\0';
    return (dest - len);
}
