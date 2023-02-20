#include <stdio.h>
int det(int arr1[10][10], int n){
    int i,det=0;
    for(i=0;i<3;i++)
      det = det + (arr1[0][i]*(arr1[1][(i+1)%3]*arr1[2][(i+2)%3] - arr1[1][(i+2)%3]*arr1[2][(i+1)%3]));
      return det;
}

void main()
   {
  int arr1[10][10],i,j;
  int n=3;//size of matrix
  
	 printf("Input elements in the first matrix :\n");
       for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&arr1[i][j]);
            }
        }  
	 printf("The matrix is :\n");
	 for(i=0;i<3;i++)
	 {
	   for(j=0;j<3 ;j++)
	     printf("% 4d",arr1[i][j]);
	    printf("\n");
	 }


  printf("\nThe Determinant of the matrix is: %d\n\n",det(arr1,n));
}
