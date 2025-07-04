#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t dst_len;

    i = 0;
    dst_len = 0;
    while (dst[dst_len] != '\0')
    {
        dst_len++;
    }
    while (i < size - 1 && src[i])
    {
        dst[dst_len + i] = src[i];
        i++;
    }
    dst[dst_len + i] = '\0';
    return dst_len + i;
}
