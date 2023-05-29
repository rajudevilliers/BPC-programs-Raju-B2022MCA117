#include <stdio.h>

int main() {

    int range, i;

    

    printf("Enter the range for the table: ");

    scanf("%d", &range);

    

    printf("Multiplication Table of 5:\n");

    for (i = 1; i <= range; i++) {

        printf("5 x %d = %d\n", i, 5 * i);

    }

    

    return 0;

}
