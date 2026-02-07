#include<stdio.h>
int main (){
    int a;
    printf("write between 1 to 5 \n");
  scanf("%d", &a);
    if (a>=0  && a<=2)
    {
        printf("bad mood");
    }
    else if (a==3)
    {
        printf("normal");
    }
    else if (a>=4 && a<=5)
    {
        printf("Happy");
    }
   else
   {
printf("not are type");
   }
    
return 0;
}
