#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int toupper(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        return c - 'a' + 'A';
    }
    return c;
}