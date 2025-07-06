# include "../libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;

	i = 0;

	if (little[0] == '\0')
	{
		return ((char *)big);
	}
	while (big[i] && i < len)
	{
		if (big[i] == little[i])
		{
			j + 0;
			while (big[i + j] == little[i + j] && i + j < len)
			{
				j++;
			}
			if (little[j] == '\0')
			{
				return ((char *)big + i);
			}
		}
		i++;
	}
	return (NULL);
}