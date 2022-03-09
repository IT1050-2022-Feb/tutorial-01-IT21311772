/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  float m1,m2,total,avg;

  printf("Enter the mark 1 : ");
  scanf("%f", &m1);
  printf("Enter the mark 2 : ");
  scanf("%f", &m2);

  total = m1 + m2;
  avg = total / 2;

  printf("The average of the marks : %.2f", avg);
  
  return 0;
}

