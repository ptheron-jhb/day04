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
static int ft_fibonacci(int index)		
{		
    if (n == 0) return 0;	
    if (n == 1) return 1;		
		
    int prevPrev = 0;		
    int prev = 1;		
    int result = 0;		
		
    for (int i = 2; i <= index; i++)		
    {		
        result = prev + prevPrev;		
        prevPrev = prev;		
        prev = result;		
    }		
    return result;		
}		
		

	

