#include <stdio.h>

int main() {
    float num_value;
    char letter_value;
    puts("GPA value");
    printf("Enter the num value: ");
    scanf("%f", &num_value);

    if (num_value < 0 || letter_value > 100) {
        printf("The value not valid\n");
        return 0;
    }

    if (num_value <= 40)
        letter_value = 'E';
    else if (num_value <= 55)
        letter_value = 'D';
    else if (num_value <= 60)
        letter_value = 'C';
    else if (num_value <= 80)
         letter_value = 'B';
    else
        letter_value = 'A';

    printf("The value of letter is %c\n", letter_value);

    return 0;
}
