#include<stdio.h>
int main(){
    char a;
    printf("Write a letter: ");
      scanf("%c",&a);
      if (a=='a' || a== 'e' || a== 'i' || a== 'o' || a=='u' || a=='A'  || a== 'E' || a==' I' || a== 'O' || a== 'U')
      {
        printf("its vowel letter");
      }
     else{
        printf("Its not vowel");
     } 
 return 0;     
}