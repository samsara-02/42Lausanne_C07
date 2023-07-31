/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stesfai <stesfai@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:22:59 by stesfai           #+#    #+#             */
/*   Updated: 2023/07/30 04:26:03 by stesfai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**************************************************************************
Exercise 00 : ft_strdup 
Turn-in directory : ex00/ 
Files to turn in : ft_strdup.c 
Allowed functions : malloc 
•Reproduce the behavior of the function strdup (man strdup). 
•Here’s how it should be prototyped : 
char *ft_strdup(char *src);
**************************************************************************
NAME: strdup, strndup -- save a copy of a string 
DESCRIPTION 
The strdup() function allocates sufficient memory for a copy of 
the string s1, does the copy, and returns a pointer to it.
The pointer may subsequently be used as an argument to the function free(3).
If insufficient memory is available, NULL is returned and errno is set to ENOMEM.
**************************************************************************
added +1 to strlen in order to also copy the ending char
*/

#include <stdlib.h> //Used for free() & malloc()
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*ptr;

	ptr = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	else
	{
		ft_strcpy(ptr, src);
		return (ptr);
	}
	free(ptr);
}

/*Used for debugging
#include <stdio.h>
int	main(void)
{
	char	*src;

	src = "Hello 42Lausanne !";
	printf("Return value: %s\n", ft_strdup(src));
}*/
