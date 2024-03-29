/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iescalon <iescalon@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 09:45:20 by iescalon          #+#    #+#             */
/*   Updated: 2024/01/18 09:52:31 by iescalon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (lst && del)
	{
		while (*lst)
		{
			temp = (*lst)-> next;
			ft_lstdelone(*lst, del);
			*lst = temp;
		}
	}
}
/*
static void del(void *content)
{
	free(content);
}

int main(void)
{
    t_list *first = ft_lstnew((void *)1);
	t_list *second = ft_lstnew((void *)2);
    int *number1 = malloc(sizeof(int));
	int *number2 = malloc(sizeof(int));

    *number1 = 42;
	*number2 = 100;
    first->content = number1;
    first->next = second;
	second->content = number2;
	second->next = NULL;
	printf("Antes: %d\n", *(int*)first->content);
	printf("Antes: %d\n", *(int*)second->content);
    ft_lstclear(&second, del);
	printf("Despues: %d\n", *(int*)first->content);
	if (second == NULL) 
        printf("La lista está vacía\n");
	else
	{
		printf("Despues: %d\n", *(int*)second->content);
	}
    return (0);
}
*/
