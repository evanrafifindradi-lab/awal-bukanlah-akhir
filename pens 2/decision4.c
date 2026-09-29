#include <stdio.h>

int main() {
    int number, i;
    int is_prime = 1;  
    printf("Enter the number: ");
    scanf("%d", &number);

    if (number <= 1) {
        is_prime = 0;  
    } else {
        for (i = 2; i <= number / 2; i++) {
            if (number % i == 0) {
                is_prime = 0;  
                break;         
            }
        }
    }

    if (is_prime) {
        printf("%d it is prime number.\n", number);
    } else {
        printf("%d it is not prime number.\n", number);
    }

    return 0;
}