/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrallo <nrallo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:57:55 by nrallo            #+#    #+#             */
/*   Updated: 2022/10/21 19:02:06 by nrallo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void * p1, const void * p2, unsigned int n)
{
	char	*s1;
	char	*s2;

	s1 = (char *)p1;
	s2 = (char *)p2;
	while (n > 0)
	{
		if(*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}