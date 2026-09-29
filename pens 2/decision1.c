#include <stdio.h>
   int main() {
       int input;

       printf("input = ");
       scanf("%d", &input);

       printf("Output = Bilangan yang diinputkan adalah %d.\n", input);

       if (input % 2 != 0) {
            printf("%d adalah bilangan ganjil.\n", input);
        } else {
            printf ("%d adalah bilangan genap.\n", input);

            return 0;
        }   


      
   }