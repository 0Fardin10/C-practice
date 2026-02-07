#include<stdio.h>
int main() {
    int i; 
    float f;
    double d;
    char c;  
    printf("size of a int %d bytes \n",sizeof(i));
    printf("size of a float %d bytes \n,", sizeof(f));
    printf("size of a double %d bytes \n",sizeof(d));
    printf("size of a char %d byets \n ",sizeof(c));
    return 0;
}