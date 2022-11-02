/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrallo <nrallo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:25:39 by nrallo            #+#    #+#             */
/*   Updated: 2022/10/31 16:17:55 by nrallo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "./libft.h"

int ft_count_char(char const *s, char c)
{
    int i;
	int j;

	j = 0;
    i = 0;
    while(*s)
	{
		if(*s != c && j == 0)
		{
			j = 1;
			i++;
		}
		else if	(*s == c)
			j = 0;
		s++;
	}
    return (i);
}

char *ft_cut_char(char *str, int s, int f)
{
    char *cp;
	int i;

    i = 0;
	cp = malloc((f - s + 1) * sizeof(char));
    while(s < f)
		cp[i++] = str[s++];
	cp[i] = '\0'; 
    return (cp);
}

 char	**ft_split(char const *s, char c) 
 { 
   	unsigned int i; 
    unsigned int j; 
    int k; 
    char        **dest;
    
    if(s == NULL)
        return(NULL);
	if ((dest = malloc((ft_count_char(s, c) + 1) * sizeof(char *))) == NULL)
        return(NULL);
    i = 0; 
    j = 0;
    k = -1; 
    while (i <= ft_strlen((char *)s)) 
    { 
            if (s[i] != c && k < 0) 
                    k = i; 
            else if ((s[i] == c  || i == ft_strlen((char *)s)) && k >= 0) 
            { 
                    dest[j++] = ft_cut_char((char *)s, k, i); 
                    k = -1; 
            } 
            i++; 
    }
    dest[j] = 0; 
    return (dest); 
 }
