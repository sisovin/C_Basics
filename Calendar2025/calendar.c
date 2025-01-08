/*
/* **********************************
 * Calendar 2025
 * **********************************/
// C_Basics/Calendar2025/calendar.c

#include <stdio.h>

void printMonth(int year, int month, int *startDay)
{
  const char *months[] = {
      "January", "February", "March", "April", "May", "June",
      "July", "August", "September", "October", "November", "December"};
  const int daysInMonth[] = {
      31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  int days = daysInMonth[month];
  if (month == 1 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
  {
    days = 29; // Leap year
  }

  printf("  ------------%s-------------\n", months[month]);
  printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

  for (int i = 0; i < *startDay; i++)
  {
    printf("     ");
  }

  for (int day = 1; day <= days; day++)
  {
    printf("%5d", day);
    if (++(*startDay) > 6)
    {
      *startDay = 0;
      printf("\n");
    }
  }

  if (*startDay != 0)
  {
    printf("\n");
  }
}

int main()
{
  int year = 2025;
  int startDay = 3; // January 1, 2025 is a Wednesday

  for (int month = 0; month < 12; month++)
  {
    printMonth(year, month, &startDay);
    printf("\n");
  }

  return 0;
}