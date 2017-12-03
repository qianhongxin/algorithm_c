#include <stdio.h>

#include "../base_sort/bubble_sort.c"

int main() {
    int a[4] = {3, 2, 1, 4};
    bubble_sort(a, 4);
    for (int i = 0; i < 4; ++i) {
        printf("%d ", a[i]);
    }

    return 0;
}