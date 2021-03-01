/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgutierr <cgutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 14:47:46 by cgutierr          #+#    #+#             */
/*   Updated: 2020/07/15 22:00:48 by cgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Conversión de minúsculas a mayúsculas
**
** ·1) Comprobamos que [c] se encuentre entre 'a'-'z'
**		Si es así, se devuelve [c]-=32, en caso contrario devolvemos [c]
**
*******************************************************************************
**									EJEMPLO								     **
*******************************************************************************
** Si enviamos:		int n	=	ft_toupper('a')
** El resultado:	n		=	65 == 'A'
*/

int	ft_toupper(int c)
{
	return (c >= 'a' && c <= 'z' ? c -= 32 : c);
}
