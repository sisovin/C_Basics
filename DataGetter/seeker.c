/*
/* **********************************
 * Getting data using fseek()
 * **********************************/
/*
If you have many records inside a file and need to access a record at a specific position, you need to loop through all the records before it to get the record.

This will waste a lot of memory and operation time. An easier way to get to the required data can be achieved using fseek().

As the name suggests, fseek() seeks the cursor to the given record in the file.

Syntax of fseek()
fseek(FILE * stream, long int offset, int whence);
The first parameter stream is the pointer to the file. The second parameter is the position of the record to be found, and the third parameter specifies the location where the offset starts.

Different whence in fseek()
Whence    Meaning
SEEK_SET    Starts the offset from the beginning of the file.
SEEK_END    Starts the offset from the end of the file.
SEEK_CUR    Starts the offset from the current location of the cursor in the file.
*/
// C_Basics/DataGetter/seeker.c
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

  if ((fptr = fopen("D:\\CGroupProjects\\C_Basics\\WriteBinaryFile\\program.bin", "rb")) == NULL)
  {
    printf("Error! opening file");

    // Program exits if the file pointer returns NULL.
    exit(1);
  }

  // Moves the cursor to the end of the file
  fseek(fptr, -(long int)sizeof(struct threeNum), SEEK_END);

  for (n = 1; n < 5; ++n)
  {
    fread(&num, sizeof(struct threeNum), 1, fptr);
    printf("n1: %d\tn2: %d\tn3: %d\n", num.n1, num.n2, num.n3);
    fseek(fptr, -2 * (long int)sizeof(struct threeNum), SEEK_CUR);
  }
  fclose(fptr);

  return 0;
}