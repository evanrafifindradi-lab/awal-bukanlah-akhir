#include <stdio.h>

int main() {
    int num;  
    
    printf("Enter the number: ");
    scanf("%d", &num);
    
    if (num >= 1 &&  num <= 100){
        printf(" %d inside the range 1-100\n", num);
    } else {
        printf(" %d outside the range 1-100\n", num);
      
    }
     return 0;
}