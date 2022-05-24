#include <stdio.h>
/**
 * beforeMain - function that executes
 */
void beforeMain(void);
__attribute__ ((constructor)) void beforeMain(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
