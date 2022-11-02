/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrallo <nrallo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:20:45 by nrallo            #+#    #+#             */
/*   Updated: 2022/10/31 12:00:31 by nrallo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "./libft.h"
#include <stdio.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    char *dest;
    int i;
    int j;
    
    if(s1 == NULL)
        return (NULL);
    dest = (char *)malloc((ft_strlen((char *) s2) + ft_strlen((char *)s1)) * sizeof(char));
    if (dest == NULL)
        return((char *)NULL);
    i = 0;
    j = 0;
    while (i != (ft_strlen((char *)s1) + ft_strlen((char *) s2)))
    {
        if(i < ft_strlen((char *)s1))
            dest[i] = s1[i];  
        else
        {
            dest[i] = s2[j];
            j++;
        }
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
