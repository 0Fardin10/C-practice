/*🔹 Q3. Print sum of numbers 1 to 10

Final output example:
Sum = 55*/
#include<stdio.h>
  int main(){
    int sum = 0, i=1;
       for (i; i <=10; i++)
       {
        sum=sum+i;
       }
       printf("%d\n",sum);
        return 0;
  }