#include <stdio.h>

int main() {
    int hoursWorked;
    double hourlyRate, salary;

    printf("Enter # of hours worked (-1 to end): ");
    while (scanf_s("%d", &hoursWorked) == 1 && hoursWorked != -1) {
        printf("Enter hourly rate of the worker ($00.00): ");
        scanf_s("%lf", &hourlyRate);

        // 計算薪水
        if (hoursWorked <= 40) {
            salary = hoursWorked * hourlyRate;
        }
        else {
            salary = 40 * hourlyRate + (hoursWorked - 40) * hourlyRate * 1.5;
        }

        // 輸出薪水
        printf("Salary is $%.2f\n", salary);

        // 輸入下一個員工的工時和工資
        printf("Enter # of hours worked (-1 to end): ");
    }

    return 0;
}