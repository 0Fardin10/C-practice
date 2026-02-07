
#include <stdio.h>

int main(){
    FILE *fp;
    fp = fopen("trip.txt","w");
    fprintf(fp, "diabari trip \ncollectd:100\n");
    fclose(cp);
    printf("file written succes ");
    return 0;
}
