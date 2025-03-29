#include <stdio.h>

/**
 * execute_first - executes before the main function
 * Return: nothing, void
 */
void execute_first(void) __attribute__((constructor));

void execute_first(void)
{
	printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}
