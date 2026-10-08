#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void createAccount() {
    int accNo;
    char name[50];
    float balance;
    FILE *fp = fopen("account.txt", "a");
    
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }
    
    printf("Enter Account Number: ");
    scanf("%d", &accNo);
    printf("Enter Name: ");
    scanf("%s", name);
    printf("Enter Initial Balance: ");
    scanf("%f", &balance);
    
    fprintf(fp, "%d %s %.2f\n", accNo, name, balance);
    fclose(fp);
    printf("Account Created Successfully!\n\n");
}

int main() {
    int choice;
    while(1) {
        printf("=== BANK MANAGEMENT SYSTEM ===\n");
        printf("1. Create Account\n");
        printf("2. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        if(choice == 1) {
            createAccount();
        } else if(choice == 2) {
            break;
        } else {
            printf("Invalid choice!\n\n");
        }
    }
    return 0;
}
