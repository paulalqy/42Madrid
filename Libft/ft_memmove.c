/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palopez- <palopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:31:09 by palopez-          #+#    #+#             */
/*   Updated: 2023/09/18 18:43:50 by palopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	n;

	n = 0;
	if (!dst && !src)
		return (0);
	while (n < len)
	{
		((char *)dst)[n] = ((const char *)src)[n];
		n++;
	}
	return (dst);
}

/*int main ()
{
	char dst [] = "mi carro se lo llevaron";
	char src [] = "hola";
	printf("%s \n", ft_memmove(dst, src, 3));
	return (0);
}
*/