#include <stdio.h>

int main() {
    double principal, rate, interest;
    int days;

    printf("Enter loan principal (-1 to end): ");
    while (scanf_s("%lf", &principal) == 1 && principal != -1) {
        printf("Enter interest rate: ");
        scanf_s("%lf", &rate);
        printf("Enter term of the loan in days: ");
        scanf_s("%d", &days);

        // 計算利息
        interest = principal * rate * days / 365;

        // 輸出利息
        printf("The interest charge is $%.2f\n", interest);

        // 輸入下一筆貸款數據
        printf("Enter loan principal (-1 to end): ");
    }

    return 0;
}