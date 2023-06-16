#include <unistd.h>

/**
 * main - A  program that prints all possible combinations
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 0;
int j = 0;

while (i < 10)
{
j = i + 1;
while (j < 10)
{
putchar(i + '0');
putchar(',');
putchar(' ');
putchar(j + '0');
if (i != 8 || j != 9)
{
putchar(',');
putchar(' ');
}
j++;
}
i++;
}
return (0);
}
