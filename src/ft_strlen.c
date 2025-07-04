#include <assert.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
    size_t len;

    len = 0;
    while (s[len])
        len++;

    return (len);
}

// int main(int argc, char **argv)
// {
//     assert(ft_strlen("") == strlen(""));
//     assert(ft_strlen("abcdefg") == strlen("abcdefg"));
//     if (argc != 2)
//     {
//         printf("argc must be 2\n");
//         return (1);
//     }
//     else
//     {
//         assert(ft_strlen(argv[1]) == strlen(argv[1]));
//         printf("checked ft_strlen(\"%s\")\n", argv[1]);
//         return (0);
//     }
// }
