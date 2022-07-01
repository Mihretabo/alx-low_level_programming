#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main- eyazageng new
 */
int void main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
	if (ch != "q" && ch != "e")
	{
		putchar(ch);
	}
}

putchar(10);

return (0);
}
