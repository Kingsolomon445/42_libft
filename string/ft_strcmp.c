/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadahun <ofadahun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:02:25 by ofadahun          #+#    #+#             */
/*   Updated: 2023/03/18 18:02:15 by ofadahun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while ((*(s1 + i) && *(s2 + i)))
	{
		if (*(s1 + i) > *(s2 + i) || *(s2 + i) > *(s1 + i))
			return ((unsigned char)*(s1 + i) - (unsigned char)*(s2 + i));
		i++;
	}
	if (!(*(s1 + i)) && !(*(s2 + i)))
		return (0);
	return ((unsigned char)*(s1 + i) - (unsigned char)*(s2 + i));
}
