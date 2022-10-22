/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrallo <nrallo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 21:49:48 by nrallo            #+#    #+#             */
/*   Updated: 2022/10/21 21:55:26 by nrallo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"
#include <stdlib.h>

char *ft_strdup(char *org)
{
    int size;
    char *d;
    char *offset;

    size = ft_strlen(org);
    d = (char *)malloc(sizeof(char) * size + 1);
    if (d == NULL)
        return((char *)NULL);

    offset = d;
    while(*org)
    {
        *offset = *org;
        offset++;
        org++;
    }
    *offset = '\0';

    return(d);
}