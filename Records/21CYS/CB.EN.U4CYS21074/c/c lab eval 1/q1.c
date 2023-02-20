#include<stdio.h>

int main(){
    printf("Enter user account balance: ");
    int x,i,w,d;
    char a;
    scanf("%d",&x);
    while(1){
        printf("\nChoose one of the below options:\nW or w for withdrawal.\nD or d for deposit.\nY or y for referring a friend.\nQ or q to quit this portal.\nEnter your choice:");
        scanf(" %c",&a);
        switch(a){
            case 'W':
            case 'w':
            printf("enter amount to be withdrwan: ");
            scanf("%d",&w);
            if (x-w>=500)
            {
                x=x-w;
                printf("Amount withdrawn successfully.");
            }
            else{printf("Account minimum balance cannot be less than 500.");}
            printf("\nremaining balance is %d", x);
            break;
            case 'D':
            case 'd':
            printf("amount to be deposited: ");
            scanf("%d",&d);
            x=x+d;
            printf("\nremaining balance is %d", x);
            break;
            case 'y':
            case 'Y':
            printf("Referral has been added.");
            x=x+50;
            printf("\nremaining balance is %d", x);
            break;
            case 'q':
            case 'Q':
            printf("Thank you");
            goto EndWhile;
            break;

        }
  
    }
    EndWhile: ;
}