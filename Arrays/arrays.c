/*
/* **********************************
 * Arrays
 * **********************************/
// C_Basics/Arrays/arrays.c

#include <stdio.h>

int main()
{
  int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
  //        indexes:    0  1  2   3   4   5
  luckyNumbers[0] = 90;
  printf("%d \n", luckyNumbers[0]);
  printf("%d \n", luckyNumbers[1]);

  return 0;
}