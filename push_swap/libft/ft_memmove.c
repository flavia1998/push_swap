/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- < fvieira-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:05:27 by fvieira-          #+#    #+#             */
/*   Updated: 2024/03/27 20:20:05 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*src1;
	char	*dest1;	

	dest1 = (char *)dest;
	src1 = (char *)src;
	if (src == NULL && dest == NULL)
		return (NULL);
	if (src1 < dest1)
	{
		while (n--)
		{
			dest1[n] = src1[n];
		}
	}
	else
		ft_memcpy (dest1, src1, n);
	return (dest);
}
