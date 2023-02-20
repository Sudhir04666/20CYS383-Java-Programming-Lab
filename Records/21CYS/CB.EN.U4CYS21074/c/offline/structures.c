#include<stdio.h>
// this is not struct rough
void swap(int a, int b){

    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main(){

    int c,d;
    c=3;
    d=4;
    swap(c,d);
    printf("%d %d",c,d);
}