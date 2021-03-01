/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgutierr <cgutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 13:32:43 by cgutierr          #+#    #+#             */
/*   Updated: 2021/02/25 18:42:48 by cgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Conversión de Int a String
**
** ·1) Comprobamos que [n] sea negativo o positivo
** ·2) Conseguimos la longitud de dígitos de [n] para asignar el memoria
**		haciendo uso de "malloc" y sumamos 1 o 2, dependiendo de si es
**		necesitamos añadir al string solo '\0' o '-'+'\0'
**		Si la asignación de memoria falla se devuelve NULL
** ·3) Si el número es negativo añadimos al inicio '-' y avanzamos en la cadena
** ·4) Luego vamos retrocediendo y asignando el número actual + '0' a la cadena
** ·5) Al llegar al final, de igual manera asignamos del mismo modo el número
**		y añadimos el '\0' final
**
** ·!) Hacemos uso de la función "malloc" gracias a la librería <stdlib.h>
**
*******************************************************************************
**									EJEMPLO								     **
*******************************************************************************
** Si enviamos:		char str	=	ft_itoa(-12345)
** El resultado:	str			=	"-12345"
*/

static int	ft_getintsize(unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	i++;
	return (i);
}

char		*ft_itoa_u(unsigned int n)
{
	char			*dest;
	unsigned int	len;
	unsigned int	nb;
	unsigned int	i;

	nb = n;
	len = ft_getintsize(nb);
	i = 0;
	if (!(dest = (char *)malloc(sizeof(char) * len + (n < 0 ? 2 : 1))))
		return (NULL);
	if (n < 0)
	{
		dest[0] = '-';
		len++;
	}
	i = len - 1;
	while (nb >= 10)
	{
		dest[i] = nb % 10 + '0';
		nb /= 10;
		i--;
	}
	dest[i] = nb % 10 + '0';
	dest[len] = '\0';
	return (dest);
}
