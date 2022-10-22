/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrallo <nrallo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:58:30 by nrallo            #+#    #+#             */
/*   Updated: 2022/10/21 21:54:16 by nrallo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stddef.h>

void			*ft_bzero(void *str, unsigned int n);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
void            *ft_memcpy(void *dest, const void *src, unsigned int n);
void			*ft_memset(void *str, int c, unsigned int n);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int				ft_strlen(char *str);
int	            ft_strncmp(const char *s1,const char *s2, unsigned int n);
char			*ft_strrchr(char const *str, int c);
int				ft_tolower(int c);
int				ft_toupper(int c);
int				ft_atoi(char *str);
void            *ft_memchr(const void *str, int c, unsigned int n);
void            *ft_memmove(void *dest, const void * src, unsigned int n);
char	        *ft_strchr(char const *str, int c);
char 	        *strnstr(const char *str, const char *to_find, unsigned int len);
void*           ft_calloc(unsigned int num, unsigned int size);
char            *ft_strdup(char *org);

#endif
