#include<stdio.h>
 int main (){
    int a;
    printf(" Write down Temperatuer in celcius : ");
       scanf("%d",&a);
   if (a>=30)
   {
    printf("Hot");
   }
    else if ( a>=20  && a<=29){
        printf("Warm");
    }
       else{
        printf("Cold");
       }
       return 0;
 }