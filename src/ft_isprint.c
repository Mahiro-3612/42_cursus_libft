# include "../includes/libft.h"

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}

// int main(int argc, char **argv)
// {
//     assert(ft_isprint(0) == isprint(0));
//     assert(ft_isprint(31) == isprint(31));
//     assert(ft_isprint(' ') == isprint(' '));
//     assert(ft_isprint('~') == isprint('~'));
//     assert(ft_isprint(127) == isprint(127));
//     assert(ft_isprint(128) == isprint(128));
//     assert(ft_isprint(-1) == isprint(-1));

//     if (argc != 2)
//     {
//         printf("argc must be 2\n");
//         return (1);
//     }
//     else
//     {
//         int c = argv[1][0];
//         assert(ft_isprint(c) == isprint(c));
//         printf("checked ft_isprint('%c')\n", c);
//         return (0);
//     }
// }
