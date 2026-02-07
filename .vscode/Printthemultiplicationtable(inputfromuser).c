/*
🔹 Q5. Print the multiplication table (input from user)

Example input: 5
Output:
5×1=5
5×2=10
…
5×10=50
*/
#include<stdio.h>
 int main(){
    int sum , n ;
    printf("Write a number");
       scanf("%d", &n );
       for(int i=1;i<=10;i++){
         printf("%d x %d= %d\n",i,n, n*i);
       }
    return 0;
 }