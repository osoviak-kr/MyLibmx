#include "libmx.h"

char *mx_strndup(const char *s1, size_t n) 
{
	char *newstr = NULL;

	if ((int)n < 0)
		return (char *)s1;
	else if(mx_strlen(s1) < (int)n)
		newstr = mx_strnew(mx_strlen(s1));
	else
		newstr = mx_strnew(n);
	return newstr ? mx_strncpy(newstr, s1, n) : NULL;
}
