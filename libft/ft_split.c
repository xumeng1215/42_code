/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charlie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:27:50 by charlie           #+#    #+#             */
/*   Updated: 2024/03/05 11:27:51 by charlie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allocates (with malloc(3)) and returns an array
// of strings obtained by splitting ’s’ using the
// character ’c’ as a delimiter. The array must end
// with a NULL pointer.

#include "libft.h"

char **ft_split(char const *s, char c) {
    char **arr;
    size_t len, i, j, k=0;
    char *sub;

    if (s == NULL)
        return NULL;

    len = strlen(s);
    arr = (char**)malloc((len / 2 + 1) * sizeof(char*));
    if (arr == NULL)
        return NULL;

    i = j = 0;
    while (s[i]) {
        if (s[i] == c) {
            sub = ft_substr(s + j, 0, i - j);
            if (sub == NULL) {
                for (k = 0; k < j; k++)
                    free(arr[k]);
                free(arr);
                return NULL;
            }
            arr[k++] = sub;
            j = i + 1;
        }
        i++;
    }

    sub = ft_substr(s + j, 0, i - j);
    if (sub == NULL) {
        for (k = 0; k < j; k++)
            free(arr[k]);
        free(arr);
        return NULL;
    }
    arr[k++] = sub;
    arr[k] = NULL;

    return arr;
}
int main() {
    char *str = "aab22c2b33a3d4444akkkk";
    char spliter = 'a';
    char **result = ft_split(str, spliter);

    for (int i = 0; result[i] != NULL; i++) {
        printf("%s\n", result[i]);
    }
    for (int i = 0; result[i] != NULL; i++) {
        free(result[i]);
    }
	free(result);
    return 0;
}
