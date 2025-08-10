#include <stdio.h>
//Area = length × width

int main() {
    int Area , length , width;
    printf("Write length%d\n",length);
    scanf("%d",&length);
    printf("Write width%d\n",width);
    scanf("%d",&width);
    Area = length * width;
    printf("your area is %d",Area);

    return 0;
}