/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrallo <nrallo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 21:33:26 by nrallo            #+#    #+#             */
/*   Updated: 2022/10/21 21:46:35 by nrallo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../header/libft.h"

void* ft_calloc(unsigned int num, unsigned int size)
{
    void *p;

    p = malloc(num *size);
    if(p == NULL)
        return (p);
    ft_bzero(p, size * num);
    return p;
}
