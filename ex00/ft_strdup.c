/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stesfai <stesfai@student.42.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:22:59 by stesfai           #+#    #+#             */
/*   Updated: 2023/07/26 21:56:41 by stesfai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**************************************************************************
Exercise 00 : ft_strdup Exercise 00 ft_strdup Turn-in directory : ex00/ Files to
turn in : ft_strdup.c Allowed functions : malloc •Reproduce the behavior of the
function strdup (man strdup). •Here’s how it should be prototyped : char
*ft_strdup(char *src);
**************************************************************************
NAME: strdup, strndup -- save a copy of a string 
DESCRIPTION 
The strdup() function allocates sufficient memory for a copy of 
the string s1, does the copy, and returns a pointer to it.
The pointer may subsequently be used as an argument to the function free(3).
If insufficient memory is available, NULL is returned and errno is set to ENOMEM.
*/

#include <stdlib.h> //Used for free() & malloc()
#include <stdio.h> //Used for debugging
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*ptr;

	ptr = malloc(ft_strlen(src) * sizeof(src));
	if (ptr == NULL)
		return (NULL);
	else
	{
		ptr = src;
		return (ptr);
	}
	free(ptr);
}

/*Used for debugging
int	main(void)
{
	char	*src;

	src = "Hello 42Lausanne";
	printf("Return value: %s\n", ft_strdup(src));
}*/
