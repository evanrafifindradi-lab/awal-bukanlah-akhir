#include <stdio.h>

int main() {
    int number1, number2, choose;

    puts("=== Math menu ===\n");
    printf("Enter the number 1: ");
    scanf("%d", &number1);
    
    printf("Enter the number 2: ");
    scanf("%d", &number2);

    printf("\nChoose the operation:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divided\n");
    printf("Your choose (1-4): ");
    scanf("%d", &choose);

    printf("\nResult: ");
    
    if (choose == 1) {
        printf("%d + %d = %d\n", number1, number2, number1 + number2);
    } else if (choose == 2) {
        printf("%d - %d = %d\n", number1, number2, number1 - number2);
    } else if (choose == 3) {
        printf("%d * %d = %d\n", number1, number2, number1 * number2);
    } else if (choose == 4) {
        if (number2 != 0) {
           
            printf("%d / %d = %d\n", number1, number2, number1 / number2);
        } else {
            printf("Error! division by zero is not allowed.\n");
        }
    } else {
        printf("Not valid!\n");
    }

    return 0;
}
        
        
    

      