#include <stdio.h>
  int main() {
      
    double gaji_pokok, tunjangan_pasangan , tunjangan_anak;
    double thr, bantuan_transport, pajak, asuransi = 20000;
    double total_kotor, total_potongan, pendapatan_bersih;
     
    int jumlah_anak, masa_kerja, masuk_kerja;
    char status_nikah;
     
     printf("Masukkan gaji pokok: ");
     scanf("%lf", &gaji_pokok);
     printf("Masukkan status pernikahan (Y/T): ");
     scanf(" %c", &status_nikah);
     printf("Masukkan jumlah anak: ");
     scanf("%d", &jumlah_anak);
     printf("Masukkan masa kerja (dalam tahun): ");
     scanf("%d", &masa_kerja);

     if (status_nikah == 'Y' ) {
         tunjangan_pasangan = 0.10 * gaji_pokok;
         tunjangan_anak = (0.05 * gaji_pokok) * jumlah_anak;
    

      thr = 5000 * masa_kerja;
      bantuan_transport = 3000 * masuk_kerja;
      pajak = 0.15 * (gaji_pokok + tunjangan_pasangan + tunjangan_anak);
      total_kotor = gaji_pokok + tunjangan_pasangan + tunjangan_anak + thr + bantuan_transport;
      total_potongan = pajak + asuransi;
       pendapatan_bersih = total_kotor - total_potongan;

    printf("Hasil perhitungan tunjangan_pasangan: %2f\n", tunjangan_pasangan);
    printf("Hasil perhitungan tunjangan_anak: %2f\n", tunjangan_anak);
    printf("Hasil Perhitungan thr: %2f\n", thr);
    printf("Hasil perhitungan bantuan_transport: %2f\n", bantuan_transport);
    printf("Hasil perhitungan pajak: %2f\n", pajak);
    printf("Hasil perhitungan polis_asuransi: %2f\n", asuransi);
    printf("Total pendapatan_bersih: %2f\n", pendapatan_bersih);
     
    return 0;

      
        
       
     
     
      }


  }