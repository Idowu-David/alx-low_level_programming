#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function.
 * Return: nothing, void
 */
void print_all(const char *const format, ...)
{
	va_list args;
	int format_index = 0;
	char *str = (char *)format;
	char *separator = "";

	va_start(args, format);
	while (str && str[format_index])
	{
		switch (str[format_index])
		{
		case 'c':
			printf("%s%c", separator, va_arg(args, int));
			break;
		case 'i':
			printf("%s%d", separator, va_arg(args, int));
			break;
		case 'f':
			printf("%s%f", separator, va_arg(args, double));
			break;
		case 's':
			{
				char *s_val = va_arg(args, char *);

				if (!s_val)
					s_val = "(nil)";
				printf("%s%s", separator, s_val);
				break;
			}
		default:
			format_index++;
			continue;
		}
		separator = ", ";
		format_index++;
	}
	va_end(args);
	printf("\n");
}
