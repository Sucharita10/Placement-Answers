1.(a)Subjugete
2.(a)RWDNXZS
3.(b)29
4.(b)7.14%
5.
#include <stdio.h>

int main() {
    int n = 5;
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    for (i = n-1; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

