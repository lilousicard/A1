#include <stdio.h>

void print4(int i) {
    printf("%d%d%d%d",i,i,i,i);
}

int main(void) {
    int baseInt;
    int headInt;
    scanf("%d %d",&baseInt,&headInt);
    printf("    %d\n", headInt);
    printf("    %d%d\n", headInt, headInt);
    print4(baseInt);
    printf("%d%d%d\n", headInt, headInt, headInt);
    print4(baseInt);
    print4(headInt);
    printf("\n");
    print4(baseInt);
    printf("%d%d%d\n", headInt, headInt, headInt);
    printf("    %d%d\n", headInt, headInt);
    printf("    %d\n", headInt);
    return 0;
}

