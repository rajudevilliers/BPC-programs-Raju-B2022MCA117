#include <stdio.h>

int main() {

    int num;

    printf("Numbers divisible by 2 and divisible by 3:\n");

    for (num = 1; num <= 100; num++) {

        if (num % 2 == 0 && num % 3 == 0) {

            printf("Pass\n");

        } else if (num % 2 == 0) {

            printf("%d\n", num);

        }

    }

    return 0;

}
