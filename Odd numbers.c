#include <stdio.h>

void generateOddNumbers(int limit) {

    if (limit >= 1) {

        generateOddNumbers(limit - 1);

        

        if (limit % 2 != 0) {

            printf("%d ", limit);

        }

    }

}

int main() {

    int n;

    

    printf("Enter the limit: ");

    scanf("%d", &n);

    

    printf("Odd numbers up to %d: ", n);

    generateOddNumbers(n);

    

    return 0;

}
