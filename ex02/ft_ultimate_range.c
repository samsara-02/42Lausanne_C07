/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stesfai <stesfai@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 22:02:30 by stesfai           #+#    #+#             */
/*   Updated: 2023/07/30 04:48:43 by stesfai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
************************************************************************** 
Exercise 02 : ft_ultimate_range 
Turn-in directory : ex02/ 
Files to turn in : ft_ultimate_range.c 
Allowed functions : malloc 
•Create a function which allocates and assigns an array of ints
This int array should contain all values between min and max. 
•Min included - max excluded.
•Here’s how it should be prototyped : 
int ft_ultimate_range(int **range, intmin, int max); 
•The size of range should be returned (or -1 on error). 
•If thevalue of min is greater or equal to max’s value, 
range will point on NULL and it should return 0.
*/
#include <stdlib.h> //Used for malloc() & NULL

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*ptr;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	ptr = malloc(size * sizeof(int));
	if (ptr == NULL)
		return (-1);
	while (i < size)
	{
		ptr[i] = i + min;
		i++;
	}
	*range = ptr;
	return (size);
}

/*Used for debugging
#include <limits.h>
#include <stdio.h>
int	main(void)
{
	int	i;
	int	min;
	int	max;
	int	**range;
	int	*ptr = NULL;
	int	range_size;

	i = 0;
	min = -42;
	max = 42;
	range = &ptr;
	range_size = ft_ultimate_range(range, min, max);
	free(*range);
	printf("range_size:	%d\n", range_size);
}*/
