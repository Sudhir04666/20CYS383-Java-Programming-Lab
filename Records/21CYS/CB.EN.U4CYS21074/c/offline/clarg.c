#include <stdio.h>
#include <stdlib.h>
int main(int ar,char*arg[])
{
    printf("%d\n", ar);
    printf("%s",arg[0]);
    printf("%s",arg[1]);
    printf("%d",atoi(arg[2]));
    printf("%f",atof(arg[3]));
    
}