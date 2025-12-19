#include "generator.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate_password(int length) {
    char charset[] =
        "abcdefghijklmnopqrstuvwxyz"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "0123456789!@#$%^&*";

    srand(time(NULL));

    for (int i = 0; i < length; i++) {
        int key = rand() % (sizeof(charset) - 1);
        putchar(charset[key]);
    }
    printf("\n");
}
