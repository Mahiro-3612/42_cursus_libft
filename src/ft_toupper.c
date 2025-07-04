#include <assert.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int	toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 'a' + 'A');
	}
	return (c);
}