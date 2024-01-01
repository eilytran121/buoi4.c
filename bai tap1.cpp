#include <stdio.h>

int main() {
  int i, num, n, count;
   printf("Enter n (n>=2): ");
   scanf("%d", &n);
   printf("The prime numbers up to %d:",n);
   for(num = 1;num<=n;num++){
      count = 0;
      for(i=2;i<=num/2;i++){
         if(num%i==0){
            count++;
         break;
      }
   }
   if(count==0 && num!= 1)
      printf("%d ",num);
   }
}
