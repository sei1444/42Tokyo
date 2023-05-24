#include <stdio.h>

void *memset(void *s, int c, size_t n)
{
	
	while (n > 0)
	{
		*s = c;

	}
	return (s);
}
