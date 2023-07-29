/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stesfai <stesfai@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 20:12:57 by stesfai           #+#    #+#             */
/*   Updated: 2023/07/29 23:09:31 by stesfai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**************************************************************************
Exercise 03
ft_strjoin
Turn-in directory : ex03/
Files to turn in : ft_strjoin.c
Allowed functions : malloc
•Write a function that will concatenate all the strings pointed by 
strs separated by sep.
•size is the number of strings in strs
•if size is 0, you must return an empty string that you can free().
•Here’s how it should be prototyped :
char *ft_strjoin(int size, char **strs, char *sep);
*/
#include <stdlib.h> //Used for malloc()

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*strjoined;

	i = 0;
	strjoined = malloc((size * 2 - 1) * sizeof(char));
	if (size == 0)
	{
		return (strjoined);
		free(strjoined);
	}
	else
	{
		while (i < size)
		{
			ft_strcat(&strjoined[i], strs[i]);
			ft_strcat(&strjoined[i], sep);
			i++;
		}
		return (strjoined);
		free(strjoined);
	}
}

/*Used for debugging*/
#include <stdio.h>
int	main(void)
{
	char	*sep = "x";
	char	*strs[] = {"Hello", "42", "Lausanne", "!!!"};
	int		size = sizeof(strs)/sizeof(strs[0]);

	puts(ft_strjoin(size, strs, sep));
}
