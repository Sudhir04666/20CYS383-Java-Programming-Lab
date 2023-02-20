#include<stdio.h>
int power(int base,int exp){
   
    long double result;

    while (exp != 0) {
        result *= base;
        --exp;
    }
    return result;
}

int gcd(int a, int b)
{
    int gcd,i;
    for(i=1; i <= a && i <= b; ++i)
    {
        if(a%i==0 && b%i==0)
            gcd = i;
    }
    return gcd;
}

int prime(int a,int b){
    int num,count,i,n;
    for(num = 1;num<=n;num++){
      count = 0;
      for(i=2;i<=num/2;i++){
         if(num%i==0){
            count++;
         break;
      }
   }
   if(count==0 && num!= 1){
       printf("%d",num);
   }

}

int main(){
    int x,a,b;

    while (1){
        printf("\nchoose from options below:\n1 for finding power of a number.\n2 for finding GCD(HCF) of 2 numbers.\n3 for printing all primes between 1 and given number.\n4 for quitting this program.\nEnter your choice: ");
        scanf(" %d", &x);
        switch(x){
            case 1:
            printf("Enter a base number: ");
            scanf(" %d", &a);
            printf("Enter an exponent: ");
            scanf(" %d", &b);
            long double result = power(a,b);
            printf(" %d^%d=%.0Lf",a,b,result);
            break;

            case 2:
            printf("Enter 1st number: ");
            scanf("%d", &a);
            printf("Enter 2nd number: ");
            scanf(" %d", &b);
            printf("gcd of %d and %d is %d", a,b,gcd(a,b));
            break;

            case 3:
            printf("Enter final number: ");
            scanf(" %d", &b);
            a=1;
            printf("The primes between 1 and %d are \n",b);
            prime(a,b);
            break;

            case 4:
            printf("thank you");
            goto EndWhile;
            break;

            default:
            printf("Invalid choice, please choose between 1-4.");
            break;
            
        }
        

    }
    EndWhile: ;
    
}
