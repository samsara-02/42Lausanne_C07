/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stesfai <stesfai@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 20:12:57 by stesfai           #+#    #+#             */
/*   Updated: 2023/08/02 16:41:50 by stesfai          ###   ########.fr       */
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
**************************************************************************
Remove 1 from size when the last char need to be treated differently
Sep or ending char
*/
#include <stdlib.h> //Used for malloc()

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

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
	int		total_length;
	char	*strjoined;

	i = 0;
	total_length = 0;
	if (size == 0)
		return (strjoined);
	while (i < size)
	{
		ft_strcat(&strjoined[i], strs[i]);
		if (i != (size - 1))
			ft_strcat(&strjoined[i], sep);
		i++;
	}
	return (strjoined);
}

/*Used for debugging*/
#include <stdio.h>
int	main(void)
{
	char	*sep = "🦎";
	char	*strs[] = {"King", "Gizzard", "&", "The", "Lizard", "Wizard"};
	//char	*strs[] = { "Hello", "world", "!" };
	int		size = sizeof(strs)/sizeof(strs[0]);
	puts(ft_strjoin(size, strs, sep));
}
