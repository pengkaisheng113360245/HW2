#include <stdio.h>

int main() {
    int n = 10;

    // Pattern A
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    // Pattern B
    for (int i = n; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    // Pattern C
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j < i; ++j) {
            printf(" ");
        }
        for (int j = i; j <= n; ++j) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    // Pattern D
    for (int i = 1; i <= n; ++i) {
        for (int j = i; j < n; ++j) {
            printf(" ");
        }
        for (int j = 1; j <= i; ++j) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}