# include "../libft.h"

char	*ft_strchr(const char *s, int c)
{
	char c_char;

	c_char = (const char)c;

	while (*s)
	{
		if (*s == c_char)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}