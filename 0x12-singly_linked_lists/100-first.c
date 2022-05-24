#include <stdio.h>
/**
 * BeforeMain - function that executes before main
 */
__attribute__ ((constructor)) void BeforeMain(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
