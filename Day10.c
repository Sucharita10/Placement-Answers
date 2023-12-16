1. (b)35%
2.(c)Ask the supervisor if she's aware of this situation.
3.(c)80
4.
#include <stdio.h>

void count_vowels_and_consonants(char* str) {
    int vowels = 0, consonants = 0;
    int i;
    char ch;
    for (i = 0; str[i] != '\0'; i++) {
        ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        } else if (ch == ' ') {
            continue;
        } else {
            consonants++;
        }
    }
    printf("\nVowels: %d", vowels);
    printf("\nConsonants: %d", consonants);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    count_vowels_and_consonants(str);
    return 0;
}
6.
#include <stdio.h>
#include <string.h>

int are_anagrams(char* str1, char* str2) {
    int count[256] = {0};
    int i;
    for (i = 0; str1[i] && str2[i]; i++) {
        count[str1[i]]++;
        count[str2[i]]--;
    }
    if (str1[i] || str2[i]) {
        return 0;
    }
    for (i = 0; i < 256; i++) {
        if (count[i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char str1[] = "listen";
    char str2[] = "silent";
    if (are_anagrams(str1, str2)) {
        printf("%s and %s are anagrams of each other.\n", str1, str2);
    } else {
        printf("%s and %s are not anagrams of each other.\n", str1, str2);
    }
    return 0;
}
