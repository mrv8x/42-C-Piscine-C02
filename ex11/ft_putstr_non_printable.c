/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbendani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 10:24:16 by hbendani          #+#    #+#             */
/*   Updated: 2021/08/10 19:01:20 by hbendani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	change_dec_to_hex(unsigned char a)
{
	char	x;
	char	y;
	char	base[];

	base = "0123456789ABCDEF";
	x = base[str[i] / 16];
	y = base[str[i] % 16];
	write(1, "//", 1);
	write (1, &x, 1);
	write (1, &y, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32)
		{
			change_dec_to_hex(str[i]);
		}
		else
		{
			write (1, &str[i], 1);
		}
		i++;
	}
}


int main ()
{
	char str[] = "Coucou\ntu vas bien ?";

	ft_putstr_non_printable(str);
}

