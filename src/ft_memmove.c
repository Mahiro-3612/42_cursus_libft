#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void *memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *dest_ptr;
    const unsigned char *src_ptr;

    i = 0;
    while (i < n)
    {
        dest_ptr[i] = src_ptr[i];
        i++:
    }
}
