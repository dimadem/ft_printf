/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmdemirk <dmdemirk@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:34:47 by dmdemirk          #+#    #+#             */
/*   Updated: 2023/10/31 17:54:28 by dmdemirk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	return ((c > 0x40 && c < 0x5B) || (c > 0x60 && c < 0x7B)
		|| (c > 0x2F && c < 0x3A));
}
