# include "../include/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char c_char;
	char *last_c;

	c_char = (const char)c;
	last_c = NULL;
	while (*s)
	{
		if (*s == c_char)
		{
			last_c = s;
		}
		s++;
	}
	return (last_c);
}