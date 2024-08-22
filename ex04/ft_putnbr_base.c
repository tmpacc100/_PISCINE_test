/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smakino <smakino@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 22:30:47 by smakino           #+#    #+#             */
/*   Updated: 2024/08/21 11:42:45 by smakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) <= 1)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base_recursive(long nbr, char *base, int base_len)
{
	if (nbr >= base_len)
		ft_putnbr_base_recursive(nbr / base_len, base, base_len);
	write(1, &base[nbr % base_len], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	long	long_nbr;

	base_len = ft_strlen(base);
	if (!check_base(base))
		return ;
	long_nbr = nbr;
	if (long_nbr < 0)
	{
		write(1, "-", 1);
		long_nbr = -long_nbr;
	}
	ft_putnbr_base_recursive(long_nbr, base, base_len);
}

// int main()
// {
//     ft_putnbr_base(42, "0123456789");
//     ft_putnbr_base(-42, "0123456789ABCDEF");
//     ft_putnbr_base(42, "01");
//     ft_putnbr_base(42, "poneyvif");
//     return 0;
// }
