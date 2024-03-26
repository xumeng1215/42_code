#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *ft_substr(char const *s, unsigned int start, size_t len) {
    size_t slen;
    char *sub;

    if (s == NULL || start > (slen = strlen(s)))
        return NULL;

    if (start + len > slen)
        len = slen - start;

    sub = (char*)malloc((len + 1) * sizeof(char));
    if (sub == NULL)
        return NULL;

    memcpy(sub, s + start, len);
    sub[len] = '\0';

    return sub;
}

// Count the number of splits
int ft_count_splits(char const *s, char c) {
    int count = 1;
    for (int i = 0; s[i]; i++)
        if (s[i] == c)
            count++;
    return count;
}

// Allocate memory for the split array
char **ft_allocate_split_array(int count) {
    char **split = (char**)malloc((count + 1) * sizeof(char*));
    if (split == NULL)
        return NULL;
    return split;
}

// Find the length of the substring
int ft_find_substring_length(char const *s, int j, char c) {
    int len = 0;
    while (s[j] && s[j] != c) {
        j++;
        len++;
    }
    return len;
}

// Allocate memory for the substring and copy it
char *ft_allocate_and_copy_substring(char const *s, int j, int len) {
    char *sub = (char*)malloc((len + 1) * sizeof(char));
    if (sub == NULL)
        return NULL;
    memcpy(sub, s + j - len, len);
    sub[len] = '\0';
    return sub;
}

// Split the string and store the substrings in the array
char **ft_split(char const *s, char c) {
    int count = ft_count_splits(s, c);
    char **split = ft_allocate_split_array(count);
    if (split == NULL)
        return NULL;

    int j = 0;
    for (int i = 0; i < count; i++) {
        int len = ft_find_substring_length(s, j);
        char *sub = ft_allocate_and_copy_substring(s, j, len);
        if (sub == NULL) {
            // Free the memory allocated for the split array
            for (int k = 0; k < i; k++)
                free(split[k]);
            free(split);
            return NULL;
        }
        split[i] = sub;
        // Move to the next substring
        while (s[j] && s[j] == c)
            j++;
    }

    // Mark the end of the array with a NULL pointer
    split[count] = NULL;

    return split;
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