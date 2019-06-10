/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 13:15:11 by jhouston          #+#    #+#             */
/*   Updated: 2019/06/07 07:20:37 by jhouston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdio.h>

int		ft_atoi(const char *str);
void	*ft_bzero(void *s, size_t n);
int		ft_intlen(long n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
char	*ft_itoa(int n);
void	*ft_memalloc(size_t size);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *ls, const void *rs, size_t n);
void	*ft_memcpy(void *d, const void *s, size_t n);
void	ft_memdel(void **ap);
void	*ft_memmove(void *d, const void *s, size_t n);
void	*ft_memset(void *buf, int ch, size_t count);
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl(char const *s);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr(int n);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr(const char *str);
void	ft_putstr_fd(const char *str, int fd);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strchr(const char *str, int c);
void	ft_strclr(char *s);
int		ft_strcmp(const char *ls, const char *rs);
size_t	ft_strcnlen(char const *s, char c, size_t x);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strcreturn(char const *s, char c, size_t x);
void	ft_strdel(char **as);
char	*ft_strdup(const char *s);
int		ft_strequ(const char *ls, const char *rs);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
int		ft_strlen(const char *str);
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strncat(char *dest, const char *src, size_t n);
int		ft_strncmp(const char *ls, const char *rs, size_t n);
char	*ft_strncpy(char *dest, const char *src, size_t n);
int		ft_strnequ(const char *s1, const char *s2, size_t n);
char	*ft_strnew(size_t size);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char *str, int c);
char	*ft_strrev(char *s);
char	**ft_strsplit(char const *s, char c);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s);
int		ft_tolower(int c);
int		ft_toupper(int c);
size_t	ft_wordcount(char const *s, char c);

#endif
