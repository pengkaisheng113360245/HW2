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

        // �p��Q��
        interest = principal * rate * days / 365;

        // ��X�Q��
        printf("The interest charge is $%.2f\n", interest);

        // ��J�U�@���U�ڼƾ�
        printf("Enter loan principal (-1 to end): ");
    }

    return 0;
}