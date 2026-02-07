#include<stdio.h>
int main ()
{
    int a,b;
    printf("write a positive number: \t" );
      scanf("%d", &a);
    
       
   if(a > 10){
    printf("Hight");
   }   
   else if ( a == 10 ){
   printf("Equal");
   }
  else 
  {
    printf("Low");
  }
   
}