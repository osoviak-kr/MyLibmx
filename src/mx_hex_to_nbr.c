#include "libmx.h"

unsigned long mx_hex_to_nbr(const char *hex) {
	int i = 0;
	unsigned long res = 0;
	int j = 0;

	while(hex[i] != '\0')
		i++;
	i--;
	while(hex[j] != '\0')
	{
		if(hex[j] >= 'A' && hex[j] <= 'F')
			res += ((hex[j] - 55) * mx_pow(16, (i - j)));
		if(hex[j] >= 'a' && hex[j] <= 'f')
			res += ((hex[j] - 87) * mx_pow(16, (i - j)));
		if(hex[j] >= '0' && hex[j] <= '9')
			res += ((hex[j] - 48) * mx_pow(16, (i - j)));
		j++;
	}
	return res;
}
