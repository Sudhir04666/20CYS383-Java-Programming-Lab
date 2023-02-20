#include<stdio.h>
int main(){
    int i,arr1[5]={0,1,2,3,4},arr2[5];
    for(i=0;i<5;i++)
    arr2[i]=arr1[4-i];
    for(i=0;i<5;i++)
    printf("%d", arr1[i]);
    printf("\n-----\n");
    for(i=0;i<5;i++)
    printf("%d", arr2[i]);
    
}