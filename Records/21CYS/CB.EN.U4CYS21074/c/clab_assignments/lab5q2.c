#include<stdio.h>
int main(){
    int i,j,size,sum=0;
    printf("enter the size of array ");
    scanf("%d", &size);
    int arr[size];
    for ( i = 0; i < size; i++)
    {
        printf("enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    for ( i = 0; i < size; i++){
        sum=sum+arr[i];
    }
    printf("\nSum of all elements in the array is %d", sum);

}