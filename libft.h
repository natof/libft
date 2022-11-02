/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrallo <nrallo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:58:30 by nrallo            #+#    #+#             */
/*   Updated: 2022/10/31 14:16:50 by nrallo           ###   ########.fr       */
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
int	            ft_memcmp(const void * p1, const void * p2, unsigned int n);
void            *ft_memcpy(void *dest, const void *src, unsigned int n);
void			*ft_memset(void *str, int c, unsigned int n);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int	ft_strlen(const char *s);
int	            ft_strncmp(const char *s1,const char *s2, unsigned int n);
char			*ft_strrchr(char const *str, int c);
int				ft_tolower(int c);
int				ft_toupper(int c);
int				ft_atoi(char const *str);
void            *ft_memchr(const void *str, int c, unsigned int n);
void            *ft_memmove(void *dest, const void * src, unsigned int n);
char	        *ft_strchr(char const *str, int c);
char 	        *ft_strnstr(const char *str, const char *to_find, unsigned int len);
void*           ft_calloc(unsigned int num, unsigned int size);
char            *ft_strdup(char *org);
char            *ft_substr(char const *src, unsigned int start, unsigned int len);
char            *ft_strjoin(char const *s1, char const *s2);
char            *ft_strtrim(char const *s1, char const *set);
char            **ft_split(char const *s, char c);
char             *ft_itoa(int n);
char             *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void             ft_striteri(char *s, void (*f)(unsigned int, char*));
void             ft_putchar_fd(char c, int fd);
void             ft_putstr_fd(char *s, int fd);
void             ft_putendl_fd(char *s, int fd);
void	         ft_putnbr_fd(int nb, int fd);

#endif
