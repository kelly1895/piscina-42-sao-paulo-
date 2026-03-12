/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: k-ramire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 20:38:09 by k-ramire          #+#    #+#             */
/*   Updated: 2026/03/10 21:11:50 by k-ramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *a / *b;
	*b = aux % *b;
}

/*int main (void)
{
	int num1 = 15;
	int num2 = 2;
	int division;
	int modulo;

	ft_ultimate_div_mod(&num1, &num2);
	printf("Numero de division: %d\n", num1);
	printf("Numero de modulo: %d\n", num2);
	return 0;
}*/
