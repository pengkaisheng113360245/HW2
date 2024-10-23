#include <stdio.h>

int main() {
    int accountNumber;
    double beginningBalance = 0.0, totalCharges = 0.0, totalCredits = 0.0, creditLimit = 0.0, newBalance = 0.0;

    printf("Enter account number (-1 to end): ");
    if (scanf_s("%d", &accountNumber) != 1) {
        printf("Invalid input!\n");
        return 1;  // �Y��J�L�ġA�h�X�{��
    }

    // ���J�b�������� -1 �ɡA�~�����
    while (accountNumber != -1) {
        // Ū���������Ȥ�ƾ�
        printf("Enter beginning balance: ");
        if (scanf_s("%lf", &beginningBalance) != 1) {
            printf("Invalid input!\n");
            return 1;  // �Y��J�L�ġA�h�X�{��
        }

        printf("Enter total charges: ");
        if (scanf_s("%lf", &totalCharges) != 1) {
            printf("Invalid input!\n");
            return 1;  // �Y��J�L�ġA�h�X�{��
        }

        printf("Enter total credits: ");
        if (scanf_s("%lf", &totalCredits) != 1) {
            printf("Invalid input!\n");
            return 1;  // �Y��J�L�ġA�h�X�{��
        }

        printf("Enter credit limit: ");
        if (scanf_s("%lf", &creditLimit) != 1) {
            printf("Invalid input!\n");
            return 1;  // �Y��J�L�ġA�h�X�{��
        }

        // �p��s�l�B
        newBalance = beginningBalance + totalCharges - totalCredits;

        // ��X�b���B�H���B�שM�s�l�B
        printf("Account: %d\n", accountNumber);
        printf("Credit limit: %.2f\n", creditLimit);
        printf("Balance: %.2f\n", newBalance);

        // �P�_�O�_�W�L�H���B��
        if (newBalance > creditLimit) {
            printf("Credit limit exceeded.\n");
        }

        // �A�����ܿ�J�b���A�Y��J -1 �h�h�X�j��
        printf("\nEnter account number (-1 to end): ");
        if (scanf_s("%d", &accountNumber) != 1) {
            printf("Invalid input!\n");
            return 1;  // �Y��J�L�ġA�h�X�{��
        }
    }

    return 0;  // ���`�����{��
}