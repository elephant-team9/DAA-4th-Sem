
#include <stdio.h>

int main(void) {
   int num1,num2,gcd;

   printf("----GCD of Two Numbers-----\n");
   printf("Enter two numbers:");
   scanf("%d %d",&num1,&num2);
   for(int i=1 ; i<=num1 && i<=num2 ; i++) {
      if (num1 % i == 0 && num2 % i == 0) {
         gcd=i;
      }
   }
   printf ("GCD of %d and %d is : %d",num1,num2, gcd);
   return 0;
}