/*
/* **********************************
 * Read from a text file
 * **********************************/
// C_Basics/WriteTextFile/textFileReader.c

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num;
  FILE *fptr;

  if ((fptr = fopen("D:\\CGroupProjects\\C_Basics\\WriteTextFile\\program.txt", "r")) == NULL)
  {
    perror("Error opening file");
    exit(1);
  }

  fscanf(fptr, "%d", &num);

  printf("Value of n=%d\n", num);
  fclose(fptr);

  return 0;
}