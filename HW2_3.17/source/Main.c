#include <stdio.h>

int main() {
    int accountNumber;
    double beginningBalance = 0.0, totalCharges = 0.0, totalCredits = 0.0, creditLimit = 0.0, newBalance = 0.0;

    printf("Enter account number (-1 to end): ");
    if (scanf_s("%d", &accountNumber) != 1) {
        printf("Invalid input!\n");
        return 1;  // 若輸入無效，退出程式
    }

    // 當輸入帳號不等於 -1 時，繼續執行
    while (accountNumber != -1) {
        // 讀取相關的客戶數據
        printf("Enter beginning balance: ");
        if (scanf_s("%lf", &beginningBalance) != 1) {
            printf("Invalid input!\n");
            return 1;  // 若輸入無效，退出程式
        }

        printf("Enter total charges: ");
        if (scanf_s("%lf", &totalCharges) != 1) {
            printf("Invalid input!\n");
            return 1;  // 若輸入無效，退出程式
        }

        printf("Enter total credits: ");
        if (scanf_s("%lf", &totalCredits) != 1) {
            printf("Invalid input!\n");
            return 1;  // 若輸入無效，退出程式
        }

        printf("Enter credit limit: ");
        if (scanf_s("%lf", &creditLimit) != 1) {
            printf("Invalid input!\n");
            return 1;  // 若輸入無效，退出程式
        }

        // 計算新餘額
        newBalance = beginningBalance + totalCharges - totalCredits;

        // 輸出帳號、信用額度和新餘額
        printf("Account: %d\n", accountNumber);
        printf("Credit limit: %.2f\n", creditLimit);
        printf("Balance: %.2f\n", newBalance);

        // 判斷是否超過信用額度
        if (newBalance > creditLimit) {
            printf("Credit limit exceeded.\n");
        }

        // 再次提示輸入帳號，若輸入 -1 則退出迴圈
        printf("\nEnter account number (-1 to end): ");
        if (scanf_s("%d", &accountNumber) != 1) {
            printf("Invalid input!\n");
            return 1;  // 若輸入無效，退出程式
        }
    }

    return 0;  // 正常結束程式
}