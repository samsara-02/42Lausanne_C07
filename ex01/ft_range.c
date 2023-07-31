/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stesfai <stesfai@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 19:26:09 by stesfai           #+#    #+#             */
/*   Updated: 2023/07/29 18:05:31 by stesfai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
**************************************************************************
Exercise 01
ft_range
Turn-in directory : ex01/
Files to turn in : ft_range.c
Allowed functions : malloc
•Create a function ft_range which returns an array ofints. This int array should
contain all values between min and max.
•Min included - max excluded.
•Here’s how it should be prototyped :
int *ft_range(int min, int max);
•If min ́value is greater or equal to max’s value, return null pointer.
In order to allocate enough memory for the array, we need to multiply 
the number of elements by 4 to match the space required by ints
*/
#include <stdlib.h> //Used for free(), malloc() & NULL
int	*ft_range(int min, int max)
{
	int		i;
	int		*ptr;
	int		size;

	i = 0;
	size = max - min;
	if (min >= max)
		return (NULL);
	ptr = malloc(size * sizeof(int));
	while (i < size)
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);
}

/*Used for debugging
#include <limits.h>
#include <stdio.h>
int main(void)
{
	int		i;
	int		min;
	int		max;
	int		*range;
	int		size;

	i = 0;
	min = -69;
	max = 42;
	range = ft_range(min, max);
	//range = ft_range(INT_MIN, INT_MAX);
	size = max - min;
	while (i < size )
	{
		printf("%d\n", range[i]);
		i++;
	}
	free(range);
}*/
