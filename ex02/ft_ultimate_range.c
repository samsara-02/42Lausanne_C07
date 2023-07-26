/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stesfai <stesfai@student.42.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 22:02:30 by stesfai           #+#    #+#             */
/*   Updated: 2023/07/26 22:28:38 by stesfai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
************************************************************************** 
Exercise 02 : ft_ultimate_range 
Turn-in directory : ex02/ 
Files to turn in : ft_ultimate_range.c 
Allowed functions : malloc 
•Create a functionft_ultimate_range which allocates and assigns an array of ints. 
This int array should contain all values between min and max. 
•Min included - max excluded.
•Here’s how it should be prototyped : 
int ft_ultimate_range(int **range, intmin, int max); 
•The size of range should be returned (or -1 on error). 
•If thevalue of min is greater or equal to max’s value, 
range will point on NULL and it should return 0.
*/
#include <stdlib.h> //Used for free(), malloc() & NULL
int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int size;

	i = 0;
	size = max - min;
	*range = malloc(size * sizeof(int));
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (*range != NULL)
	{
		while (i < size)
		{
			*range[i] = min + i;
			i++;
		}
		return (size);
	}
	else
		return (-1);
}

/*Used for debugging*/
#include <limits.h>
#include <stdio.h>
int	main(void)
{
	int	i;
	int	min;
	int	max;
	int	*range;
	int	size;

	i = 0;
	min = -69;
	max = 42;
	range = NULL;
	size = ft_ultimate_range(&range, min, max);
	while (i < size)
	{
		printf("%d, ", range[i]);
		i++;
	}
	free(range);
}
