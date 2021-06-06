/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prochell <prochell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 13:48:56 by prochell          #+#    #+#             */
/*   Updated: 2021/05/20 13:51:06 by prochell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

size_t    ft_strlen(const char *s)
{
    size_t    i;

    i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}

char    *ft_strdup(const char *s)
{
    char    *dupstr;
    int        i;

    i = 0;
    dupstr = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (!dupstr)
        return (NULL);
    while (s[i])
    {
        dupstr[i] = s[i];
    }
    dupstr[i] = '\0';
    return (dupstr);
}

int main() {
  char *a = "asfdgh";
  printf("%s\n", ft_strdup(a));
  return 0;
}