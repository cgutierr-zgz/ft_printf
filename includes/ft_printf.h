/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgutierr <cgutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 20:00:27 by cgutierr          #+#    #+#             */
/*   Updated: 2021/03/01 19:06:47 by cgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_printf es una recreación de la función printf
**
** Librerias externas:
**
** <stdlib.h>
**    ·malloc	| Asignación de memoria dinámica
**    ·free		| Liberación de memoria dinámica
**
** <unistd.h>
**    ·write	| Escritura a un file descriptor
**
** <stdarg.h>
**    ·va_start	| Inicialización de va_list
**    ·va_arg	| Se consigue el siguiente valor de va_list
**    ·va_copy	| Se crea una copia de va_list
**    ·va_end	| Se libera va_list
*/

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define SPECIFIER "ncspdiuxX%"
# define FLAGS "123456789-.0*"

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include "../libft/libft.h"

/*
** This struct contains everything flag-related
*/
typedef struct	s_flags
{
	int width;
	int precss;
	int zero;
	int ljust;
	int dot;
	int	cerox;
}				t_flags;
/*
** Main struct
*/
typedef struct	s_print
{
	va_list	ap;
	int		n;
	int		i;
	t_flags	flags;
}				t_print;
/*
** Main Function
*/
int				ft_printf(const char *fmt, ...);
/*
** Flags
*/
void			ft_flags(const char *fmt, t_print *pstruct);
/*
** Specificators
*/
void			ft_handle_c_pct(t_print *pstruct, char c);
void			ft_handle_s(t_print *pstruct);
void			ft_handle_d_i(t_print *pstruct);
void			ft_handle_u(t_print *pstruct);
void			ft_handle_p(t_print *pstruct);
void			ft_handle_x_x(t_print *pstruct, char c);
/*
** Bonus
*/
void			ft_handle_n(t_print *pstruct);

#endif
