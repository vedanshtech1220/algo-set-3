#include <stdio.h>
#include <string.h>

int countVowels(char *num) {
    char *words[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty"};
    char *hundred = "hundred";
    int vowels = 0;
    for (int i = 0; num[i]; i++) {
        if (strchr("aeiou", num[i])) vowels++;
    }
    return vowels;
}

int main() {
    int n, arr[100];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Compute digit D
    int D = 0;
    for (int i = 0; i < n; i++) {
        char num[20];
        sprintf(num, "%d", arr[i]);
        D += countVowels(num);
    }

    // Count pairs
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == D) count++;
        }
    }
    printf("%d\n", count);
    return 0;
}

