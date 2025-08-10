#include <stdio.h>

int main() {
   int num;
   printf("Write down odd or even  number ",num);
   scanf("%d",&num);
   if(num %2==0){
    printf("Number is EVEN\t%d",num);
   }
   else{
    printf(" Number is  odd\t %d",num);
   }
    
    return 0;
}