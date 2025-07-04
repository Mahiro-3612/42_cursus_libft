# include "../include/libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

// int main(int argc, char **argv)
// {
//     assert(ft_isdigit('0') == isdigit('0'));
//     assert(ft_isdigit('9') == isdigit('9'));
//     assert(ft_isdigit('a') == isdigit('a'));
//     assert(ft_isdigit('@') == isdigit('@'));
//     assert(ft_isdigit(128) == isdigit(128));
//     assert(ft_isdigit(-1) == isdigit(-1));

//     if (argc != 2)
//     {
//         printf("argc must be 2\n");
//         return (1);
//     }
//     else
//     {
//         int c = argv[1][0];
//         assert(ft_isdigit(c) == isdigit(c));
//         printf("checked ft_isdigit('%c')\n", c);
//         return (0);
//     }
// }
