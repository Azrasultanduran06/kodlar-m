#include<stdio.h>
int main()
{
int vize=0;

int sayac=1;
printf("vize gir\n");
scanf("%d",&vize);
while(vize<0|| vize>100)
{

    printf("Ooooopppsss tekrar girin\n");
    scanf("%d",&vize);
}

  return 0;
}
