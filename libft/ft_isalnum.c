/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgutierr <cgutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 14:54:55 by cgutierr          #+#    #+#             */
/*   Updated: 2020/07/15 21:59:20 by cgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Comprobación de si el int [c] recibido es un Alfanumérico
**
** ·1) Comprobamos que [c] se encuentre entre '0'-'9' o 'A'-'Z' o 'a'-'z'
**		Si es así, se devuelve 1, en caso contrario devolvemos 0
**
*******************************************************************************
**									EJEMPLO								     **
*******************************************************************************
** Si enviamos:		int n	=	ft_isalnum('A')
** El resultado:	n		=	1
*/

int	ft_isalnum(int c)
{
	return ((c >= 'A' && c <= 'Z') ||
			(c >= 'a' && c <= 'z') ||
			(c >= '0' && c <= '9')
			? 1
			: 0);
}
