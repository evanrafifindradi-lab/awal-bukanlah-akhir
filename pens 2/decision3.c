#include <stdio.h>
  int main () {
   float total_purchase, discount, total_payment;
    
    printf("Masukkan total_purchase: ");
    scanf("%f", &total_purchase);

    if( total_purchase >= 100000) {
         discount = total_purchase * 0.05;
    } else {
          ("Did not receive a discount\n");

    }
    total_payment = total_purchase - discount;

    printf("Total purchase : Rp%.2f\n", total_purchase);
    printf("Discount        : Rp%.2f\n", discount);
    printf("Total payment     : Rp%.2f\n", total_payment);

    return 0;
    
}
