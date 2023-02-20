#include<stdio.h>
int main(){
    int day;
    printf("enter n to find nth day in a week ");
    scanf("%d", &day);
    switch(day){
    case 1 :
        printf("its sunday");
        break;
    case 2 :
        printf("its monday");
        break;
    case 3 :
        printf("its tuesday");
        break;
    case 4 :
         printf("its wednesday");
        break;
    case 5 :
        printf("its thursday");
        break;
    case 6 :
        printf("its friday");
        break;
    case 7 :
        printf("its saturday");
        break;
    default:
        printf("A week only contains 7 days!");
        break;     

    }
    return 0;
}