/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrallo <nrallo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:52:00 by nrallo            #+#    #+#             */
/*   Updated: 2022/10/21 18:35:57 by nrallo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

void *ft_memchr(const void *str, int c, unsigned int n)
{
    unsigned char *a;
	unsigned char *b;

	a = (unsigned char*)str;
    b = NULL;
    while(n--)
    {
        if( *a != (unsigned char)c )
            a++;
        else
        {
            b = a;
            break;
        }
    }
    return (b);
}