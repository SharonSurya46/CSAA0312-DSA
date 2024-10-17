#include <stdio.h>

int main() {
    int num, i, sum = 0;
    char choice;

    printf("Enter 'e' for even numbers or 'o' for odd numbers: ");
    scanf("%c", &choice);

    printf("Enter the number of elements: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        int element;
        scanf("%d", &element);

        if ((choice == 'e' && element % 2 == 0) || (choice == 'o' && element % 2 != 0)) {
            sum += element;
        }
    }

    printf("Sum of %c numbers = %d\n", choice, sum);

    return 0;
}
