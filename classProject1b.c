#include <stdio.h>

int main () {
  printf("Enter your grades for the following subjects: \n");
  
  float grade1, grade2, grade3;
  float total, average, percentage;

  printf("CSC 201: ");
  scanf("%f", &grade1);

  printf("CSC 206: ");
  scanf("%f", &grade2);

  printf("STA 205: ");
  scanf("%f", &grade3);

  
  total = grade1 + grade2 + grade3;

  average = total / 3;

  percentage = (total / 300) * 100;

  printf("\nTotal = %.2f\n", total);
  printf("Average = %.2f\n", average);
  printf("Percentage = %.2f%%\n", percentage);

  return 0;
}