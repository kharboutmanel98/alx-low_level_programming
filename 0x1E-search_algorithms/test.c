#include <stdio.h>

int main(void) {
    int array[] = {
        10, 1, 42, 3, 4, 42, 6, 7, -1, 9
        };

    int k = sizeof(array) / sizeof(array[0]);
    printf("%d\n", k);
    return 0;
}
