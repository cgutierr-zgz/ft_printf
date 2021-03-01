/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgutierr <cgutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 14:51:47 by cgutierr          #+#    #+#             */
/*   Updated: 2020/07/15 22:00:38 by cgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Conversión de mayúsculas a minúsculas
**
** ·1) Comprobamos que [c] se encuentre entre 'A'-'Z'
**		Si es así, se devuelve [c]+=32, en caso contrario devolvemos [c]
**
*******************************************************************************
**									EJEMPLO								     **
*******************************************************************************
** Si enviamos:		int n	=	ft_tolower('A')
** El resultado:	n		=	97 == 'a'
*/

int	ft_tolower(int c)
{
	return (c >= 'A' && c <= 'Z' ? c += 32 : c);
}
