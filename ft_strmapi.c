/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrallo <nrallo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:51:32 by nrallo            #+#    #+#             */
/*   Updated: 2022/10/31 12:07:15 by nrallo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "./libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i;
    char *dest;

    if(s == NULL)
        return (NULL);
    dest = malloc(ft_strlen((char *)s) + 1 * sizeof(char));
    if(dest == NULL)
        return (NULL);
    i = 0;
    while (*s)
    {
        dest[i] = f(i, *s);
        i++;
        s++;
    }
    dest[i] = '\0';
    return (dest);
}