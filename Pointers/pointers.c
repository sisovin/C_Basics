/*
/* **********************************
 * Pointers
 * **********************************/
// C_Basics/Pointers/pointers.c

#include <stdio.h>

int main()
{
  int num = 10;
  printf("%p \n", &num);

  int *pNum = &num;
  printf("%p \n", pNum);
  printf("%d \n", *pNum);

  return 0;
}