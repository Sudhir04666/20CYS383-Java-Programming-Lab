#include<stdio.h>
int main(){
    printf("enter n to find the no. of days in the nth month ");
    int month;
    scanf("%d", & month);
    printf("enter the year ");
    int year;
    scanf("%d", & year);
            switch (month) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                printf("the no. of days in this month is 31.");
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                printf("the no. of days in this month is 30.");
                break;
            case 2:
                if (((year % 4 == 0) && 
                     !(year % 100 == 0))
                     || (year % 400 == 0))
                    printf("the no. of days in this month is 29.");
                else
                    printf("the no. of days in this month is 28.");
                break;
            default:
                printf("Invalid month.");
                break;
        }


}