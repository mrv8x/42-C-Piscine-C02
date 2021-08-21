/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbendani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 13:41:32 by hbendani          #+#    #+#             */
/*   Updated: 2021/08/10 09:51:43 by hbendani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z' )
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	x;	
	int	y;

	x = 0;
	y = 1;
	ft_strlowcase(str);
	 while (str[x] != '\0')
		 {
		if (str[x] >= 'a' && str[x] <= 'z')
			 {
			 if (y == 1)
				 str[x] -= 32;
			y = 0;
			 }
		else if (str[x] >= '0' && str [x] <= '9')
			y = 0;
		else
			y = 1;
		x++;
	}
	return (str);
}
