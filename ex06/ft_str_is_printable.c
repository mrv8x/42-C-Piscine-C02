/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable1.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbendani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 09:27:20 by hbendani          #+#    #+#             */
/*   Updated: 2021/08/10 09:27:33 by hbendani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_printable(char *str)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (str[0] == '\0')
		return (1);
	else
	{
		while (*(str + i) != '\0')
		{
			if (str[i] < ' ' )
			{
				j++;
			}
			i++;
		}
		if (j != 0)
			return (0);
		else
			return (1);
	}
}
