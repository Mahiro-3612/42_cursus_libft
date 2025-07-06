#include "../libft.h"

int	atoi(const char *str)
{
	int sign;
	unsigned int num;
	int result;

	sign = 1;
	while (*str == ' ' || *str == '\f' || *str == '\n' || *str == '\r'
		|| *str == '\t' || *str == '\v')
	{
		str++;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			sign = -sign;
		}
		str++;
	}
	num = 0;
	while (*str && *str >= '0' && *str <= '9')
	{
		num *= 10;
		num += *str - '0';
		str++;
	}
	if (num == (unsigned int)-INT_MIN && sign == -1)
	{
		return (INT_MIN);
	}
	result = num * sign;
	return (result);
}