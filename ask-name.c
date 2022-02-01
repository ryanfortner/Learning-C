/***
ask-name.c
simple c program to ask your name
***/

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
  char name[15];

  printf("Enter your name: ");
  scanf("%s", name);
  printf("Hello, %s!\n", name);

  return 0;
}