#include<stdio.h>
int main()
{
int vize, final,devam;
float ortalama;

printf("Vize final ve devam giriniz: ");
scanf("%d %d %d",&vize,&final,&devam);

ortalama=vize*0.4+final*0.6;

if(ortalama >= 50 &&devam < 5) 
 {
printf("GECTI\n");
} 
else
 {
    printf("KALDI\n");
}
 
return 0;

}
