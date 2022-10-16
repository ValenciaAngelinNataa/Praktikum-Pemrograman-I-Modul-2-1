#include<stdio.h>
int main()
{
int s1=4, s2=5, s3=7, harga=85000;
printf("Diketahui : \n");
printf("Panjang sisi segitiga berturut-turut adalah 4, 5, dan 7\n");
printf("Keliling Tanah Pak Dengklek adalah %d\n", s1+s2+s3);
printf("Harga tanah Per Meter adalah %d\n", harga);
printf("Jawaban : \n");
printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d\n", (s1+s2+s3)*harga);
}
