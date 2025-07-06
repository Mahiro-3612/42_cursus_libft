#include "../libft.h"

char	*strdup(const char *s)
{
	char	*copy;

	copy = malloc(strlen(s) + 1);
	if (copy == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(copy, s, strlen(s) + 1);
	return (copy);
}
