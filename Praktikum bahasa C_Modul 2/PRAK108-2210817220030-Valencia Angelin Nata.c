#include<stdio.h>
int main()
{
float phi= 3.14, jarak= 14, putaran= 5;
printf("Diketahui : \n");
printf("Pak Dengklek mengelilingi taman = %.f Putaran\n", putaran);
printf("Jarak tempuh Pak Dengklek = %.f Kilometer\n", jarak);
printf("Jawaban : \n");
printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer", (jarak/putaran)/(2*phi));
}
