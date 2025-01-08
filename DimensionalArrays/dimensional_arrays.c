/*
/* **********************************
 * 2 Dimensional Arrays
 * **********************************/
// C_Basics/DimensionalArrays/dimensional_arrays.c

#include <stdio.h>

int main()
{
  int numberGrid[2][3] = {{1, 2, 3}, {4, 5, 6}};
  numberGrid[0][1] = 99;

  printf("%d \n", numberGrid[0][0]);
  printf("%d \n", numberGrid[0][1]);

  return 0;
}