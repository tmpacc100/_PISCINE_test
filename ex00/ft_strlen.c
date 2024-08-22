/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smakino <smakino@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:46:25 by smakino           #+#    #+#             */
/*   Updated: 2024/08/22 12:19:33 by smakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

// int main(void)
// {
//     char str[] = "12345";
//     int  result;

//     result = ft_strlen(str);
//     ft_putnbr(result);
//     ft_putchar('\n');
//     return (0);
// }