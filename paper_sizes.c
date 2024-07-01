#include<stdio.h>
#include<conio.h>
int main()
{
 int a,b,n,i,temp;
 a=1189;
 b=841;
 printf("Enter nth term to find consecutive paper's size : ");
 scanf("%d",&n);
 printf("\nAll Paper sizes reference with A0\n\n");
 printf("A0 = %dmm X %dmm   (Base size)\n",a,b);
 for(i=1;i<=n;i++)
 {
  if(a>b)
  {
   temp=a;
   a=b;
   b=temp/2;
   printf("A%d = %dmm X %dmm\n",i,a,b);
  }
 }
 getch();
 return 0;
}
