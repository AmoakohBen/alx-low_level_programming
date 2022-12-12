#include <stdio.h>
/**
 * main - Prints both lowercase and uppercase letters of the alphabet
 *
 * Return: Always (Success)
 */
int main(void) 
{
  int ch;
  for (ch = 'a'; ch <= 'z'; ch++)
    {
      putchar(ch); 
    }
  for (ch = 'A'; ch <= 'Z'; ch++)
    {
      putchar(ch); 
    }
  putchar('\n');
  return (0); 
}
 
