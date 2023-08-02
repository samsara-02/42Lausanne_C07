/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stesfai <stesfai@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 23:39:59 by stesfai           #+#    #+#             */
/*   Updated: 2023/07/31 23:57:31 by stesfai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Exercise 05 ft_split Turn-in directory : ex05/ Files to turn in : ft_split.c
Allowed functions : malloc •Create a function that splits a string of character
depending on another string of characters. •You’ll have to use each character
from the string charset as a separator. •The function returns an array where
each element of the array contains the address of a string wrapped between two
separators. The last element of that array should equal to 0 to indicate the end
of the array. •There cannot be any empty strings in your array. Get your own
conclusions ac- cordingly. •The string given as argument won’t be modifiable.
•Here’s how it should be prototyped : char **ft_split(char *str, char *charset);
*/

#include <stdlib.h> //Required for malloc()

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	**ft_split(char *str, char *charset)
{
	char	**ptr_adr;
	int		str_len;
	int		charset_len;
	int		i;

	i = 0;
	str_len = ft_strlen(str);
	charset_len = ft_strlen(charset);
	ptr_adr = malloc((str_len + 3) * sizeof(char));
	while (str[i])
	{	
		ptr_adr[i] = str[i];
		str[i]++;
	}
	ptr_adr[i + 1] = '\0';
	return (ptr_adr[i]);
}

int	ft_count_words(char *str)
{
	int	i;
	int	word_count;

	i = 0;
	word_count = 0;
	if (str[0] == '\0')
		return (word_count);
	else
		word_count++;
	while (str[i])
	{
		if (str[i] >= 1 && str[i] <= 33)
			word_count++;
		i++;
	}
	return (word_count);
}

/*Used for debugging*/
#include <stdio.h>
#include <strings.h>
int	main(void)
{
	char	*str;
	char	*charset;
	int		i;
	//char	**strings;
	//char	*test;

	i = 0;
	str = "Hello 42	lausanne";
	charset = "123";
	//strings = (ft_split(str, charset));
	/*test = strtok(str, "h");
	while (test[i])
	{
		printf("Split: %c\n", test[i]);
		i++;
	}*/
}
