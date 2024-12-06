#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isValid(char *s) {
    char stack[10000];
    int top = -1;
    for (int i = 0; s[i]; i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            stack[++top] = s[i];
        } else {
            if (top == -1) return false;
            char last = stack[top--];
            if ((s[i] == ')' && last != '(') ||
                (s[i] == '}' && last != '{') ||
                (s[i] == ']' && last != '[')) {
                return false;
            }
        }
    }
    return top == -1;
}

int main() {
    char s[100];
    printf("Enter the string: ");
    scanf("%s", s);
    printf("%s\n", isValid(s) ? "true" : "false");
    return 0;
}

