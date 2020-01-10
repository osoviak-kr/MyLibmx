#include "libmx.h"

char *mx_strnew(const int size)
{
	int i;

	if (size >= 0)
	{
		char *s = malloc((size + 1) * sizeof(char));
			
		for(i = 0; i < size + 1; i++)
		{
			s[i] = '\0';
		}
		return s;
	}
	return NULL;
}
