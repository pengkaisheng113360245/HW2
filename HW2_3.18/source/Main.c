#include <stdio.h>

int main() {
    double sales, salary;

    printf("Enter sales in dollars (-1 to end): ");
    while (scanf_s("%lf", &sales) == 1 && sales != -1) {
        // �p���~��
        salary = 200 + (sales * 0.09);

        // ��X�~��
        printf("Salary is: $%.2f\n", salary);

        // ��J�U�@���P��ƾ�
        printf("Enter sales in dollars (-1 to end): ");
    }

    return 0;
}