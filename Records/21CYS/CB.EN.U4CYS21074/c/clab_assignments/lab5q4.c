#include<stdio.h>
int main(){
    int i,j,size,a;
    printf("enter the size of array ");
    scanf("%d", &size);
    int arr[size];
    for ( i = 0; i < size; i++)
    {
        printf("enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size; ++i){
      for (j = i + 1; j < size; ++j){
         if (arr[i] > arr[j]){
            a = arr[i];
            arr[i] = arr[j];
            arr[j] = a;
         }
      }
   }
   printf("The array ascending order is: ");
   for (i = 0; i < size; ++i){
      printf("%d ", arr[i]);
   }
}