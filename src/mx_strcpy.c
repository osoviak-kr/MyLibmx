char *mx_strcpy(char *dst, const char *src) {
	char *to = dst;
	
	while (*src)
		*to++ = *src++;
	if (*src == '\0')
		*to = '\0';
	return dst;
}
