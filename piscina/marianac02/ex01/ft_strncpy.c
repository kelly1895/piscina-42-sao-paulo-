/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: k-ramire <k-ramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 19:20:08 by mariafer          #+#    #+#             */
/*   Updated: 2026/03/05 14:39:20 by k-ramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	aux;

	aux = 0;
	while (src[aux] != '\0' && aux < n)
	{
		dest[aux] = src[aux];
		aux++;
	}
	while (aux < n)
	{
		dest[aux] = '\0';
		aux++;
	}
	return (dest);
}

#include <stdio.h>
#include <string.h>
int	main(void)
{
	unsigned int	n = 3;
	char	dest[10];
	char	src[] = "marian";

	printf("%s\n", ft_strncpy(dest, src, n));
	printf("%s", strncpy(dest, src, n));
	return (0);
}