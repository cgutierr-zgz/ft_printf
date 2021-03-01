/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgutierr <cgutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 22:51:02 by cgutierr          #+#    #+#             */
/*   Updated: 2021/02/28 19:36:02 by cgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Libft es una librería que contiene funciones básicas escritas en C
**
** Cada función contiene una explicación del proceso y de no ser obvio,
** esta explicación se ve acompañada de un pequeño ejemplo
**
** Librerias externas:
**
** <stdlib.h>
**	·malloc	| Asignación de memoria dinámica
**	·free	| Liberación de memoria dinámica
**
** <unistd.h>
**	·write	| Escritura a un file descriptor
**	·size_t | Valores positivos muy grandes
**
*******************************************************************************
**									APUNTES								     **
*******************************************************************************
** ·PUNTEROS
** ·1) El operador "*" se usa como un puntero a una variable
**		Ejemplo: [*a] dónde [*] es el puntero a la variable [a]
** ·2) El operador "&" se usa para obtener la dirección de una variable
**		Ejemplo: [&a] nos daría la dirección de [a]
**
** ·CASTEOS
** ·1) Usamos el casteo para cualquier tipo de variable de ser posible
**		Ejemplo: [int a] [size_t b] podemos igualar así [int a = (int)size_t b]
*/

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

/*
** Parte 1 - Funciones de la Libc
** [LIBFT]
*/

void			*ft_memset(void *b, int c, size_t len);
char			*ft_strrchr(const char *s, int c);
void			ft_bzero(void *s, size_t n);
char			*ft_strnstr(const char *str, const char *needle, size_t len);
void			*ft_memcpy(void *dst, const void *src, size_t n);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
int				ft_atoi(const char *str);
void			*ft_memmove(void *dst, const void *src, size_t len);
int				ft_isalpha(int c);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_isdigit(int c);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
int				ft_isalnum(int c);
size_t			ft_strlen(const char *s);
int				ft_isascii(int c);
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);
int				ft_isprint(int c);
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);
int				ft_toupper(int c);
char			*ft_strchr(const char *s, int c);
int				ft_tolower(int c);
char			*ft_strdup(const char *s1);
void			*ft_calloc(size_t count, size_t size);

/*
** Parte 2 - Funciones adicionales
** [LIBFT]
*/

char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);

/*
** Parte extra
** [LIBFT]
*/

typedef	struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

t_list			*ft_lstnew(void *content);
void			ft_lstadd_front(t_list **alst, t_list *new);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void*));
void			ft_lstclear(t_list **lst, void (*del)(void *));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *ls, void *(*f)(void *), void (*dl)(void *));

/*
** Propias
*/
char			*ft_itoa_u(unsigned int n);
char			*ft_itoa_base(unsigned long long number, char *base);

#endif
