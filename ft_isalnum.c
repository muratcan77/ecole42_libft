/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarakay <akarakay@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 14:26:15 by akarakay          #+#    #+#             */
/*   Updated: 2022/10/22 16:28:48 by akarakay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int a)
{
	if ((a >= 'a' && a <= 'z')
		|| (a >= 'A' && a <= 'Z') || (a >= '0' && a <= '9'))
		return (1);
	return (0);
}
