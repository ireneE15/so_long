/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:12:36 by iescalon          #+#    #+#             */
/*   Updated: 2024/01/15 09:46:12 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	size_t				counter;

	if (s == NULL && n == 0)
	{
		return (NULL);
	}
	counter = 0;
	str = s;
	while (counter < n)
	{
		if ((unsigned char)c == str[counter])
		{
			return ((void *)(str + counter));
		}
		counter++;
	}
	return (NULL);
}
/*
int main(void)
{
    const char *string = "Hello, world!";
    char chara = 'z';
    size_t n = 13;

    void *result = ft_memchr(string, chara, n);

    if (result != NULL)
	{
        printf("El byte de '%c' está en %ld.\n", chara, (char *)result - string);
    } 
	else
	{
        printf("'%c' no se encuentra en los %zu bytes.\n", chara, n);
    }
    return (0);
}
*/
