/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrallo <nrallo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:59:13 by nrallo            #+#    #+#             */
/*   Updated: 2022/10/29 17:46:50 by nrallo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char 	*ft_strnstr(const char *str, const char *to_find, unsigned int len)
{
    int	i;
	int	j;

	i = 0;
	if (*to_find == '\0' || to_find == NULL)
		return ((char *)str);
    if(len != 0)
	    while (str[i] != '\0' && i < len)
	    {
	    	j = 0;
	    	while (str[i + j] == to_find[j] && i + j < len)
	    	{
	    		if (to_find[j + 1] == '\0')
	    			return ((char *)str + i);
	    		j++;
	    	}
	    	i++;
	    }
	return (NULL);
}