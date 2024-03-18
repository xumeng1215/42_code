/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 15:19:40 by mexu              #+#    #+#             */
/*   Updated: 2023/12/06 17:22:15 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	is_splitter(char c, char *charset)
{
	while (*charset != '\0')
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str != '\0')
	{
		if (is_splitter(*str, charset))
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}

char	*duplicate_word(char *start, char *end)
{
	char	*word;
	int		i;
	int		char_count;

	char_count = end - start;
	word = (char *)malloc((char_count + 1) * sizeof(char));
	if (word == NULL)
		return (0);
	i = 0;
	while (i < char_count)
	{
		word[i] = start [i];
		i++;
	}
	word[char_count] = '\0';
	return (word);
}

char	**mapping_word(char **result, char *str, char *charset)
{
	int		word_index;
	int		in_word;
	char	*char_start;

	word_index = 0;
	in_word = 0;
	char_start = str;
	while (*str != '\0')
	{
		if (is_splitter (*str, charset))
		{
			if (in_word)
				result[word_index++] = duplicate_word(char_start, str);
			in_word = 0;
		}
		else if (!in_word)
		{
			char_start = str;
			in_word = 1;
		}
		str++;
	}
	if (in_word)
		result[word_index] = duplicate_word(char_start, str);
	return (result);
}

char	**ft_split(char *str, char *charset)
{
	int		num_words;
	char	**result;

	num_words = count_words(str, charset);
	result = (char **)malloc((num_words + 1) * sizeof(char *));
	if (result == NULL)
		return (0);
	mapping_word(result, str, charset);
	result[num_words] = 0;
	return (result);
}


int main() {
    char *str = "a111ab22c2b333d4444a";
    char *charset = "abcd";
    char **result = ft_split(str, charset);

    for (int i = 0; result[i] != NULL; i++) {
        printf("%s\n", result[i]);
    }
    for (int i = 0; result[i] != NULL; i++) {
        free(result[i]);
    }
	free(result);
    return 0;
}

