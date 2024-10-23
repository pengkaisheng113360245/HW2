#include <stdio.h>
#include <math.h>

int main() {
    double principal = 5000.0;
    int years = 15;

    for (double rate = 10.0; rate <= 12.0; rate += 0.5) {
        printf("Interest Rate: %.1f%%\n", rate);

        for (int year = 1; year <= years; ++year) {
            double amount = principal * pow(1 + rate / 100, year);
            printf("Year %d: $%.2f\n", year, amount);
        }
        printf("\n");
    }

    return 0;
}