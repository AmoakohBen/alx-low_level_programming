#include <stdio.h>
/**
 * main - Prints letters of the alphabet
 *
 * Return: Always (Success)
 */
int main(void) 
{
  int ch;
  for (ch = 'a'; ch <= 'z'; ch++)
    putchar(ch);
  putchar('\n');
  return (0); 
}
