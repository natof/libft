/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrallo <nrallo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:46:33 by nrallo            #+#    #+#             */
/*   Updated: 2022/10/31 14:49:51 by nrallo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"
#include <stdio.h>

char	*ft_strchr(char const *str, int c)
{
	unsigned int i;

	i = -1;
	while (++i != ft_strlen(str) + 1)
		if(str[i] == (char)c)
			return ((char *)(str + i));
	return (NULL);
}
