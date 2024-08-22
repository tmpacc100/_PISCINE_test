/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smakino <smakino@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 22:30:46 by smakino           #+#    #+#             */
/*   Updated: 2024/08/20 16:06:57 by smakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_atoi("  ---+--+1234ab567"));
// 	printf("%d\n", ft_atoi("  -123"));
// 	printf("%d\n", ft_atoi("++123"));
// 	printf("%d\n", ft_atoi("+-54"));
// 	printf("%d\n", ft_atoi("   +123   "));
// 	printf("%d\n", ft_atoi("123abc"));
// 	return (0);
// }
