/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int mark1;
  int mark2;
  float avg;
printf("enter the marks of 1st subject : ");
scanf("%d",&mark1);
printf("Enter the marks of 2nd subject : ");
scanf("%d",&mark2);
avg= (mark1+mark2)/2.0;
printf("%f",avg);

  return 0;
}

