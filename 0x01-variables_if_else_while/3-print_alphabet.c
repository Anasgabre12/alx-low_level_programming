#include <stdio.h>
/**
 * main - Entry alpha
 * Return: Alwayse 0 (sucsess)
*/
int main(void)
{
char c;
c = 'a';
c = 'A';
/*print a - z*/
while
(c <= 'z')
{
putchar(c);
c++;
}
/*print A - Z*/
while
(c <= 'Z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
