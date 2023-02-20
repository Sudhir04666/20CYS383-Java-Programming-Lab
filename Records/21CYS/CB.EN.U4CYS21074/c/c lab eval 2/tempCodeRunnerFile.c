#include<stdio.h>

int lowtri(int arr[50][50], int r,int c){
    printf("lower triangle of the matrix is: \n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    if(i>=j)
       printf("%d  ", arr[i][j]);
       if(i<j){printf(" ");}
    if (j == c-1)
    printf("\n");
        
    }  
}

int intrchng(int a[50][50], int r,int c){
    if(r=c=3){
    printf("\ninterchanging rows 1->3 2->1 3->2\n");
    int b[50][50];
    for (int j = 0; j < c; ++j) {
    b[2][j] = a[0][j];
    b[0][j] = a[1][j];
    b[1][j] = a[2][j];
  }
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    printf("%d  ", b[i][j]);
    if (j == c - 1)
    printf("\n");
  }
    }
    else{printf("matrix should be 3x3 for interchanging");}
}

int descolmn(int a[50][50], int r,int c){
    printf("\ncolumns arranged in descending order\n");
    int b[50][50],n,i,j,k;
   for (j=0;j<c;++j){
      for (i=0;i<r;++i){
         for (k=i+1;k<r;++k){
            if (b[i][j] < b[k][j]){
               n = b[i][j];
               b[i][j] = b[k][j];
               b[k][j] = n;
            }
         }
      }
   }
   for (int i = 0; i < r; ++i)
   for (int j = 0; j < c; ++j) {
    printf("%d  ", b[i][j]);
    if (j == c - 1)
    printf("\n");
  }
}

int main() {
  int a[50][50], r, c;
  printf("Enter rows and columns: ");
  scanf("%d %d", &r, &c);

  printf("\nEnter matrix elements:\n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    printf("Enter element a%d%d: ", i + 1, j + 1);
    scanf("%d", &a[i][j]);
  }

  printf("\nEntered matrix: \n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    printf("%d  ", a[i][j]);
    if (j == c - 1)
    printf("\n");
  }

  lowtri(a,r,c);
  intrchng(a,r,c);
  descolmn(a,r,c);

}