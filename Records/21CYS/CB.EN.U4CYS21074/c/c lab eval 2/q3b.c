#include <stdio.h>

int prod(int arr1[50][50],int brr1[50][50],int r1,int c1,int r2,int c2){
    int i,j,k,sum=0,crr1[50][50];

    for(i=0;i<r1;i++)
          for(j=0;j<c2;j++)
           crr1[i][j]=0;
             for(i=0;i<r1;i++)       
                 { 
                   for(j=0;j<c2;j++)    
                     {  
                       sum=0;
                         for(k=0;k<c1;k++)
                           sum=sum+arr1[i][k]*brr1[k][j];
                           crr1[i][j]=sum;
                     }
                 }
  printf("\nThe multiplication of two matrices is : \n");
  for(i=0;i<r1;i++)
     {
        printf("\n");
        for(j=0;j<c2;j++)
         {
           printf("%d\t",crr1[i][j]);
         }
     }
  }



void main()
{
  int arr1[50][50],brr1[50][50],crr1[50][50],i,j,k,r1,c1,r2,c2,sum=0;  
  printf("\nInput the rows and columns of first matrix : ");
  scanf("%d %d",&r1,&c1);
  printf("\nInput the rows and columns of second matrix : ");
  scanf("%d %d",&r2,&c2);
  if(c1!=r2){
      printf("Mutiplication of Matrix is not possible.");
      printf("\nColumn of first matrix and row of second matrix must be same.");
  }
       
       printf("Input elements in the first matrix :\n");
       for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&arr1[i][j]);
            }
        }   
       printf("Input elements in the second matrix :\n");
       for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&brr1[i][j]);
            }
        }
        
        prod(arr1,brr1,r1,c1,r2,c2);
      
}
