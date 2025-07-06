#include "../libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	ft_memset(ptr, 0, nmemb * size);
	return (ptr);
}