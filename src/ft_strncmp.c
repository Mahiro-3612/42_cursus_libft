#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while (i < n && s1[i] && s2[i])
    {
        if (s1[i] != s2[i])
        {
            break;
        }
        i++;
    }
    return s1[i] - s2[i];
}