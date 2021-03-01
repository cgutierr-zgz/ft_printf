/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgutierr <cgutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 11:41:16 by cgutierr          #+#    #+#             */
/*   Updated: 2020/07/15 13:58:01 by cgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Devolver un puntero a un String que es un duplicado de [s1]
**
** ·1) Almacenamos memoria para el nuevo String haciendo uso de
**		"ft_strlen" y "malloc", de no funcionar la reserva de
**		memoria, se devuelve NULL
** ·2) Vamos avanzando en la cadena [s1] hasta el final '\0' y
**		vamos igualando la nueva cadena a esta
** ·3) Añadimos un último '\0' y devolvemos el resultado
**
** ·!) Hacemos uso de la función "malloc" gracias a la librería <stdlib.h>
*/

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*str;
	int		i;

	len = ft_strlen(s1) + 1;
	if (!(str = ((char *)malloc(sizeof(char) * len))))
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
