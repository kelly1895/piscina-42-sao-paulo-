/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: k-ramire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 17:13:14 by k-ramire          #+#    #+#             */
/*   Updated: 2026/03/10 19:35:53 by k-ramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

/*int	main(void)
{
	int num1 = 18;
	int num2 = 29;

	
	printf("Numero antes de la funcion:  %d %d\n", num1, num2);
	ft_swap(&num1, &num2);
	printf("Numero despues de la funcion: %d %d\n", num1, num2);

	return(0);
}*/	
