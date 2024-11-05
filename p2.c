#include <stdio.h>

int main() {
    int number, digit, smallest = 9;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number > 0) {
        digit = number % 10; 
        if (digit < smallest) {
            smallest = digit;
        }
        number /= 10; 
    }

    printf("The smallest digit is: %d", smallest);

    return 0;
}
