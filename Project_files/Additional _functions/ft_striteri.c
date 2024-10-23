/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:10:07 by abougati          #+#    #+#             */
/*   Updated: 2024/10/23 23:10:08 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_striteri(char *s, void (*f)(unsigned int,char *))
{
    if (!s || !f)
		return ;

    unsigned int a;
    a=0;

    while(s[a])
    {
        f(a , &s[a]);
        a++;
    }
}