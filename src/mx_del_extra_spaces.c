#include "libmx.h"

static int size_str_no_ws(char *str) 
{
	int size = 0;
	
	for (int i = 0; str[i]; i++) {
		while (mx_isspace(str[i]) && mx_isspace(str[i + 1])) {
			i++;
		}
		size++;
	}
	return size;
}

char *mx_del_extra_spaces(const char *str) 
{
	int i = 0;
	int j = 0;
	char *trimstr;
	char *newstr;

	if (!str)
		return NULL;
	trimstr = mx_strtrim(str);
	newstr = mx_strnew(size_str_no_ws(trimstr));
	if (!newstr || !trimstr)
		return NULL;
	while (trimstr[i]) {
		if (mx_isspace(trimstr[i]) && mx_isspace(trimstr[i + 1])) {
			for (;mx_isspace(trimstr[i]); i++);
			newstr[j] = ' ';
			j++;
		}
		else
			newstr[j++] = trimstr[i++];
	}
	free(trimstr);
	return newstr;
}
