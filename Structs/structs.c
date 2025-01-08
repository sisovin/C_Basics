/*
/* **********************************
 * Structs
 * **********************************/
// C_Basics/Structs/structs.c

#include <stdio.h>
#include <string.h>

struct Book
{
  char title[100];
  char author[100];
  int numPages; // Added numPages field
};

int main()
{
  struct Book book1;
  book1.numPages = 600;
  strcpy(book1.title, "Harry Potter");
  strcpy(book1.author, "JK Rowling");

  printf("%s \n", book1.title);

  return 0;
}