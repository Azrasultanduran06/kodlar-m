#include<stdio.h>
int main()
{
 int sayi, numara;
    float ortalama;
printf("Iki sayi giriniz: \n");
scanf("%d %d" , &sayi, &numara);

ortalama=(sayi+numara) / 2.0;

printf(" iki sayinin ortalamasi : %.2f",ortalama);

return 0;
}
