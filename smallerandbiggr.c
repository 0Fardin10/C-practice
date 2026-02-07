#include<stdio.h>
int main(){
    int a,b;
    printf("Write  1st number:\n");
      scanf("%d",&a);
    printf("2nd number:\n");
      scanf("%d", &b);
    if (a < b)
    {
        printf("frist is  a small number");
    }
      
else if (b > a)
{
    printf(" 2nd  is  bigest number ");
}
else{
    printf("its equal");
}
 return 0;
}