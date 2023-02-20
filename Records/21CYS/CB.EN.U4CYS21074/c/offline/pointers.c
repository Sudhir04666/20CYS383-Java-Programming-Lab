#include<stdio.h>

int main(){

for(int i=1;i<=3;i++){
    int n=i;
int*ptr;
ptr=&n;
printf("%p\n",ptr);
printf("%d\n",*ptr);

}

}