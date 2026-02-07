#include<stdio.h>
 int main()
{
    int a;
    printf("Write your grade number: \n");
      scanf("%d",&a);
    if(a>=80){
        printf("A");
    }  
 else if (a>=60 && a<=79)
 {
    printf("B");
 }
 else if (a>=40 && a<=59)
 {
    printf("C");
 }
 else{
    printf("F");
 }
    return 0;

}