//
// Created by subin on 2025. 8. 26..
//
#include <stdio.h>
// #pragma warning (disable:4996)
#define OFFSET 1000000

int arr[2000001] = { 0 };

int main() {
    int n, x;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        arr[x + OFFSET] = 1;
    }

    for (int i = 0; i <= 2000000; i++) {
        if (arr[i]) {
            printf("%d\n", i - OFFSET);
        }
    }

    return 0;
}
