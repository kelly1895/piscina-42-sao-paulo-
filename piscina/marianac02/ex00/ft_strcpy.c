/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: k-ramire <k-ramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 14:29:53 by mariafer          #+#    #+#             */
/*   Updated: 2026/03/05 14:33:00 by k-ramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	aux;

	aux = 0;
	while (src[aux] != '\0')
	{
		dest[aux] = src[aux];
		aux++;
	}
	dest[aux] = '\0';
	return (dest);
}

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	dest[50];
	char	src[] = "MARIIana";

	printf("%s\n", ft_strcpy(dest, src));
	printf("%s", strcpy(dest, src));
	return (0);
}