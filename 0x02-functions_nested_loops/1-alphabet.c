#include "main.h"
/**
*print_alphabet- prints the alphabet in lowercase, followed by a new line
*
*Return: Always 0
*/
void print_alphabet(void)
{
int alphabet = 'a';
while (alphabet <= 'z')
{
if (alphabet != 'q' && alphabet != 'i')
putchar(alphabet);
alphabet++;
putchar('\n');
}
return (0);
}
