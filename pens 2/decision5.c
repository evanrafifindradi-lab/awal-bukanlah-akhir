#include <stdio.h>

int main() {
    int num1, num2;  
    
    printf("Enter the number 1: ");
    scanf("%d", &num1);
    printf("Enter the number 2:");
    scanf("%d", &num2);
   
    if (num2 == 0){
        printf("Error: division by zero\n");
    } else {
      float result = (float) num1 / num2;
       printf("Divide result %d / %d = %.3f\n", num1, num2, result);
    }
     return 0;
}


