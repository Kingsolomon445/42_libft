/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_int_array.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadahun <ofadahun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:59:51 by ofadahun          #+#    #+#             */
/*   Updated: 2023/03/23 16:01:25 by ofadahun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_free_int_array(int **arr, int rows)
{
	int	i;

	i = 0;
	while (i < rows)
	{
		ft_free(arr[i]);
		i++;
	}
	ft_free(arr);
}