#include <stdio.h>

int main(){
  int rowMatrix[] = {4, 5, 7, 8, 8};
  int newArray[5];
  int matrix[3][2] = {
    {3, 8},
    {2, 0},
    {5, 2}
  }; //3 rows, 2 columns
  // printf("%i", rowMatrix[i]);

  // for(int i = 0; i < 5; i++){
  //   printf("%i\n", rowMatrix[i]);
  // }

  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 2; j++){
       printf("%i\n", matrix[i][j]);
    }
  }

  int x = 10;
  int *ptr = &x;
  return 0;
}