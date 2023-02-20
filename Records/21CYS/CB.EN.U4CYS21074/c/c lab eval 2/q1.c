#include <stdio.h>
int main() {
  int a[3][3], b[3][3], r=3, c=3;

  printf("\nEnter elements of 3x3 matrix 1:\n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    printf("Enter element a%d%d: ", i + 1, j + 1);
    scanf("%d", &a[i][j]);
  }
  printf("\nEnter elements of 3x3 matrix 2:\n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    printf("Enter element a%d%d: ", i + 1, j + 1);
    scanf("%d", &b[i][j]);
  }

  printf("\nmatrix1: \n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    printf("%d  ", a[i][j]);
    if (j == c - 1)
    printf("\n");
  }

  printf("\nmatrix2: \n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    printf("%d  ", b[i][j]);
    if (j == c - 1)
    printf("\n");
  }

  
  return 0;
}