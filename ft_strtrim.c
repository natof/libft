/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrallo <nrallo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:13:02 by nrallo            #+#    #+#             */
/*   Updated: 2022/10/30 23:39:51 by nrallo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include <stdio.h>
#include "./libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    unsigned int i;
        
    if(!s1 || !set)
        return (0);
    while (*s1 && ft_strchr(set, *s1))
        s1++;
    i = ft_strlen((char *)s1);
    while (i && ft_strchr(set, s1[i]))
    {
        i--;
    }
    return (ft_substr(s1, 0, i + 1));
}
