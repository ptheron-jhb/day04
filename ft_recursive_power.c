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
		
		
int power(int nb, unsigned power)		
{		
	
	if (power == 0)	
		return 1;
		
	if (power & 1) // if n is odd	
		return nb * power(nb, power / 2) * power(nb, power / 2);
		
	// else n is even	
	return power(nb, power / 2) * power(nb, power / 2);	
}		
		
int main(void)		
{		
	int nb = -2;	
	unsigned power = 10;	
		
	printf("pow(%d,%d) = %d", nb, power, power(nb, power));	
	return 0;	
}		
		
	

