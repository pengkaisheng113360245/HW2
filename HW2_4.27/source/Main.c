#include <stdio.h>

int main() {
    const int limit = 500;

    printf("Pythagorean triples with side lengths up to %d are:\n", limit);

    for (int a = 1; a <= limit; ++a) {
        for (int b = a; b <= limit; ++b) {
            for (int c = b; c <= limit; ++c) {
                if (a * a + b * b == c * c) {
                    printf("(%d, %d, %d)\n", a, b, c);
                }
            }
        }
    }

    return 0;
}