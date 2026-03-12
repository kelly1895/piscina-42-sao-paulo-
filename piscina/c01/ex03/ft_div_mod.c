/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: k-ramire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 19:44:49 by k-ramire          #+#    #+#             */
/*   Updated: 2026/03/10 20:39:00 by k-ramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main (void)
{
	int num1 = 7;
	int num2 = 2;
	int division;
	int modulo;
	
	ft_div_mod(num1, num2, &division, &modulo);
	printf("Numero de division: %d\n", division);	
	printf("Numero de modulo:  %d\n", modulo);
	return 0;
}*/
