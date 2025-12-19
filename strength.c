#include "strength.h"
#include <string.h>
#include <ctype.h>

int check_strength(const char *p) {
    int score = 0;
    int hasUpper = 0, hasLower = 0, hasDigit = 0, hasSymbol = 0;

    if (strlen(p) >= 8) score++;

    for (int i = 0; p[i]; i++) {
        if (isupper(p[i])) hasUpper = 1;
        else if (islower(p[i])) hasLower = 1;
        else if (isdigit(p[i])) hasDigit = 1;
        else hasSymbol = 1;
    }

    score += hasUpper + hasLower + hasDigit + hasSymbol;
    return score;
}
