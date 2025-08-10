#include <stdio.h>

int main() {
    float area;
    int r;

    printf("write radius:\n");
    scanf("%d", &r);

    area = 3.1416 * r * r;

    printf("Your area is: %.2f\n", area);

    return 0;
}
