/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgutierr <cgutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 17:49:12 by cgutierr          #+#    #+#             */
/*   Updated: 2020/07/16 09:45:39 by cgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Llenar de 0's el puntero indicado
**
** ·1) Creamos un puntero a [s]
** ·2) Avanzamos en el puntero hasta finalizar y lo vamos llenando de 0's
*/

void	ft_bzero(void *s, size_t n)
{
	char *ptr;

	ptr = s;
	while (n > 0)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}
