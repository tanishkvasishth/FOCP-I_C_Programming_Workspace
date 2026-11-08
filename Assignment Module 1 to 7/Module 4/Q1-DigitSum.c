#include <stdio.h>

int main() {
    int T, N;

    scanf("%d", &T);

    while (T--) {
        scanf("%d", &N);

        int first = N;
        int last = N % 10;

        while (first >= 10) {
            first = first / 10;
        }

        printf("%d\n", first + last);
    }

    return 0;
}