#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */

int void main(void)
{
int n;
char ch;
for (ch = 48; ch <= 58; n++)
{
putchar(n);
}
for (ch = "a"; ch <= "f"; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
