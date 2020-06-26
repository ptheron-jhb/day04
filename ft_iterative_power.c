/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptheron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 12:28:54 by ptheron           #+#    #+#             */
/*   Updated: 2020/06/17 12:30:18 by ptheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
		
#include <stdio.h>		
				
int ft_iterative_power(int nb, int power)		
{		
		
	int pow = 1;	
		
	/*multiply x exactly n times*/	
	for (int i = 0; i < power; i++)	
		pow = pow*nb;
		
	return pow;	
}		
		
int main(void)		
{		
	int nb = -2;	
	unsigned n = 10;	
		
	printf("pow(%d,%d) = %d", nb, power, power(nb, power));	
		
	return 0;	
}		
		
