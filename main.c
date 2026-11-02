#include <stdio.h>

int main(void) {
    int num;
    double result;

    scanf("%d", &num);

    result = num * 1.08;

    printf("%d\n", (int)result);

    return 0;
}