#include <stdio.h>

int main() {
    int a[] = {4, 8, 98, 67, 32};
    int* p = &a[0];

    // Add your code below this line
    printf("a[2] = %d\n", *(p + 2));

    return 0;
}
