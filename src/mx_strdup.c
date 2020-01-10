#include "libmx.h"

char *mx_strdup(const char *str) {
	char *newstr = mx_strnew(mx_strlen(str));

	if (newstr == NULL)
		return NULL;
	return newstr ? mx_strcpy(newstr, str) : NULL;
}
