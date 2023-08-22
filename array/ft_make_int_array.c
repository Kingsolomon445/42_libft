/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_int_array.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadahun <ofadahun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:59:51 by ofadahun          #+#    #+#             */
/*   Updated: 2023/03/23 16:01:25 by ofadahun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int    **ft_make_int_array(int rows, int cols)
{
    int **arr;
    int *tab;
    int i;
    int j;

    arr = malloc(sizeof(int *) * rows);
    if (!arr)
        return (NULL);
    i = 0;
    while(i < rows)
    {
        tab =  malloc(sizeof(int) * cols);
        if (!tab)
            return (ft_free_int_array(arr, i), NULL);
        j = 0;
        while (j < cols)
			tab[j++] = 0;
        arr[i++] = tab;
    }
    return (arr);
}