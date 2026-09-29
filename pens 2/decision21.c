#include <stdio.h>
 int main () {
    puts ("counting discriminant");
   float  d_a, d_b, d_c;

   fflush(stdin);
   printf("Enter d_a: ");
   scanf("%f", &d_a);
   fflush(stdin);
   printf("Enter d_b: ");
   scanf("%f", &d_b);
   fflush(stdin);
   printf("Enter d_c: ");
   scanf("%f", &d_c);

   if( d_a || d_b || d_c == 0){
      printf("Use the formula x1 = x2 = -b/2a");
   } else if ( d_a && d_b && d_c > 0 ){
       printf("Use the formula x1 = (-b + sqrt(d))/ 2a");
       puts("Use the formula x2 = (-b - sqrt(d))/ 2a");
    } else {
        printf("Use the formula x1 = -b/2a + (sqrt(-d)/2a)i");
        puts("Use the formula x2 = -b/2a - (sqrt(-d)/2a)i");

    }
      return 0;
   }


 