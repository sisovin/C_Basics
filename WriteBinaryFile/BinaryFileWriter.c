/*
/* **********************************
 * Writing to a binary file
 * **********************************/
/*
To write into a binary file, you need to use the fwrite() function. The functions take four arguments:

address of data to be written in the disk
size of data to be written in the disk
number of such type of data
pointer to the file where you want to write.
fwrite(addressData, sizeData, numbersData, pointerToFile);
*/
// C_Basics/WriteBinaryFile/BinaryFileWriter.c
#include <stdio.h>
#include <stdlib.h>

struct threeNum
{
  int n1, n2, n3;
};

int main()
{
  int n;
  struct threeNum num;
  FILE *fptr;

  if ((fptr = fopen("D:\\CGroupProjects\\C_Basics\\WriteBinaryFile\\program.bin", "wb")) == NULL)
  {
    printf("Error! opening file");

    // Program exits if the file pointer returns NULL.
    exit(1);
  }

  for (n = 1; n < 5; ++n)
  {
    num.n1 = n;
    num.n2 = 5 * n;
    num.n3 = 5 * n + 1;
    fwrite(&num, sizeof(struct threeNum), 1, fptr);
  }
  fclose(fptr);

  return 0;
}