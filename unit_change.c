#include<stdio.h>
#include<conio.h>

void main()
{
 float dst,m,ft,in,cm;
 printf("Enter Distance(in KM)...  ");
 scanf("%f",&dst);
 m = dst * 1000;
 ft= dst * 3280.84;
 in= dst * 39370.1;
 cm= dst * 100000;
 printf("\n   = %f meter",m);
 printf("\n   = %f centimeter",cm);
 printf("\n   = %f inch",in);
 printf("\n   = %f feet",ft);
 getch();
}
