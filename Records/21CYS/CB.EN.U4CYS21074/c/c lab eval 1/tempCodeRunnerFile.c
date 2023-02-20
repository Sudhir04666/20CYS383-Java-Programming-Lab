int prime(int a, int b){
    int num,count,i;
    printf("Enter final number: ");
    scanf(" %d", &b);
    printf("The primes between 1 and %d are \n",b);
    a=1;
    for(num = 1;num<=b;num++){
      count = 0;
      for(i=2;i<=num/2;i++){
         if(num%i==0){
            count++;
         break;
         }
      }
   }
   if(count==0 && num!= 1){
       printf("%d",num);
   }

}