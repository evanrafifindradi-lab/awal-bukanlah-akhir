#include <stdio.h>
  int main () {
   float total_purchase, discount, total_payment;
    
    printf("Masukkan total_purchase: ");
    scanf("%f", &total_purchase);

    if( total_purchase >= 100000) {
         discount = total_purchase * 0.05;
    } else {
         discount = 0;

    }
    total_payment = total_purchase - discount;

    printf("Total pembelian : Rp%.2f\n", total_purchase);
    printf("Diskon          : Rp%.2f\n", discount);
    printf("Total bayar     : Rp%.2f\n", total_payment);

    return 0;
    
}








  