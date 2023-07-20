#include "vadiatric_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_all - print char, integer, float and string
* @format: format
*/

void print_all(const char * const format, ...)
{
	va_list args;
	char c;
	int i;
	float f;
	char *s;
	unsigned int index = 0;

	va_start(args, format);

	while (format && format[index])
	{
		switch (format[index])
		{
			case 'c':
				c = (char)va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = (float)va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
			default:
				break;
		}

		if (format[index + 1])
			printf(", ");

		index++;
	}

	printf("\n");
	va_end(args);
}

int main()
{
	print_all("cifs", 'H', 42, 3.14, "Hello");
	print_all("sifc", NULL, 42, 3.14, 'C');

	return 0;
}
