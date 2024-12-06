#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool canFormPalindrome(char *s) {
    int count[26] = {0};
    for (int i = 0; s[i]; i++) {
        count[s[i] - 'a']++;
    }
    int oddCount = 0;
    for (int i = 0; i < 26; i++) {
        if (count[i] % 2 != 0) oddCount++;
    }
    return oddCount <= 1;
}

int main() {
    int t;
    printf("Enter the number of test cases: ");
    scanf("%d", &t);
    while (t--) {
        char s[10001];
        printf("Enter the string: ");
        scanf("%s", s);
        printf("%s\n", canFormPalindrome(s) ? "Yes" : "No");
    }
    return 0;
}

