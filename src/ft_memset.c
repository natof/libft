/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrallo <nrallo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:30:08 by nrallo            #+#    #+#             */
/*   Updated: 2022/10/19 20:21:59 by nrallo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *str, int c, unsigned int n)
{
	int				i;
	unsigned char	*strrrrrr;

	i = 0;
	strrrrrr = str;
	while (i != (int)n)
		strrrrrr[i++] = (unsigned char)c;
	return (str);
}
