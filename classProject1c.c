#include <stdio.h>

int main() {
  char input;

  printf("Enter a character between A and J: ");
  scanf("%c", &input);

  if (input >= 'A' && input <= 'J'){
    printf("The next 6 characters are: ");
    for (int i = 1; i <= 6; i++) {
      printf("%c", input + i);
    }
    printf("\n");
  }
  else {
    printf("Invalid input! Please enter a character between A and J.\n");
  }

  return 0;
}
