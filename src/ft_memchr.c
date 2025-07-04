# include "../includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *s_ptr;
	unsigned char c_char;

	s_ptr = (const unsigned char *)s;
	c_char = (unsigned char)c;
	while (n > 0)
	{
		if (*s_ptr == c_char)
		{
			return (s_ptr);
		}
		s_ptr++;
		n--;
	}
	return (NULL);
}