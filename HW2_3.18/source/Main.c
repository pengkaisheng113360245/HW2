#include <stdio.h>

int main() {
    double sales, salary;

    printf("Enter sales in dollars (-1 to end): ");
    while (scanf_s("%lf", &sales) == 1 && sales != -1) {
        // 計算薪水
        salary = 200 + (sales * 0.09);

        // 輸出薪水
        printf("Salary is: $%.2f\n", salary);

        // 輸入下一筆銷售數據
        printf("Enter sales in dollars (-1 to end): ");
    }

    return 0;
}