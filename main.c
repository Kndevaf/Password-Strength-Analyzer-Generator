#include <stdio.h>
#include "strength.h"
#include "generator.h"

int main() {
    int choice;
    char password[128];

    do {
        printf("\n1. Check Password Strength\n");
        printf("2. Generate Strong Password\n");
        printf("3. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter password: ");
            scanf("%s", password);
            int score = check_strength(password);
            printf("Strength score: %d / 5\n", score);
        }

        if (choice == 2) {
            int length;
            printf("Password length: ");
            scanf("%d", &length);
            generate_password(length);
        }

    } while (choice != 3);

    return 0;
}
