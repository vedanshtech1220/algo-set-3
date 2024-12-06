#include <stdio.h>
#include <stdbool.h>

bool isValidString(char *s) {
    int low = 0, high = 0;
    for (int i = 0; s[i]; i++) {
        if (s[i] == '(') {
            low++;
            high++;
        } else if (s[i] == ')') {
            if (low > 0) low--;
            high--;
        } else if (s[i] == '*') {
            if (low > 0) low--;
            high++;
        }
        if (high < 0) return false;
    }
    return low == 0;
}

int main() {
    char s[100];
    printf("Enter the string: ");
    scanf("%s", s);
    printf("%s\n", isValidString(s) ? "true" : "false");
    return 0;
}

