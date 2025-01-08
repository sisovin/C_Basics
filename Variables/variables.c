// ************************************************
// Variables and Data Types in C
// c_Basics/variables/variables.c
// Run: gcc variables/variables.c -o debug/variables
// Run: ./variables
// Run: .\variables.exe
// Output: 10
//         20
//         30
// ************************************************

#include <stdio.h>

int main()
{
  char testGrade = 'A'; // single 8-bit character.
  char name[] = "Mike"; // array of characters (string)

  // you can make them unsigned by adding "unsigned" prefix
  short age0 = 10;     // atleast 16-bits signed integer
  int age1 = 20;       // atleast 16-bits signed integer (not smaller than short)
  long age2 = 30;      // atleast 32-bits signed integer
  long long age3 = 40; // atleast 64-bits signed integer

  float gpa0 = 2.5;       // single percision floating point
  double gpa1 = 3.5;      // double-precision floating point
  long double gpa2 = 3.5; // extended-precision floating point

  int isTall; // 0 if false, non-zero if true
  isTall = 1;

  testGrade = 'F';

  printf("%s, your grade is %c \n", name, testGrade);

  return 0;
}