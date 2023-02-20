#include<stdio.h>
#include<stdlib.h>

int main(){

    int*p,i,n;
    n=10;
    p=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        scanf("\n %d",(p+1));
    }
    free(p);
}