#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{ 
    size_t i;

    i = 0;
    while (i < size - 1 && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    i = 0;
    while (src[i] != '\0')
    {
        i++;
    }

   return i;
}

// int main(void)
// {
//     char dest[10];
//     const char *src = "Hello, World!";
//     size_t copied;

//     copied = ft_strlcpy(dest, src, sizeof(dest));
//     printf("Copied string: '%s'\n", dest);
//     printf("Number of characters copied: %zu\n", copied);

//     // Test with a larger source string
//     const char *long_src = "This is a much longer string than the destination can hold.";
//     copied = ft_strlcpy(dest, long_src, sizeof(dest));
//     printf("Copied string: '%s'\n", dest);
//     printf("Number of characters copied: %zu\n", copied);

//     return 0;
// }