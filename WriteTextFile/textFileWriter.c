/*
/* **********************************
 * Write to a text file
 * **********************************/
// C_Basics/WriteTextFile/textFileWriter.c

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num;
  FILE *fptr;

  // use appropriate location if you are using MacOS or Linux
  fptr = fopen("D:\\CGroupProjects\\C_Basics\\WriteTextFile\\program.txt", "w");

  if (fptr == NULL)
  {
    perror("Error opening file");
    exit(1);
  }

  printf("Enter num: ");
  scanf("%d", &num);

  fprintf(fptr, "%d", num);
  fclose(fptr);

  return 0;
}