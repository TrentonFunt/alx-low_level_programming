#include "lists.h"
#include <stdio.h>

/**
 * startup_text - executed before the main function
 */
void __attribute__((constructor)) startup_text(void)
{
printf(
"You're beat! and yet, you must allow,\nI bore my house upon my back!\n"
);
}
