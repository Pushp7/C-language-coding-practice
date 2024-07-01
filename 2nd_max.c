#include<stdio.h>
#include<conio.h>
int main()
{
 int i,num[5],max;
 printf("Enter 5 Arrays\n");
 for(i=0;i<=4;i++)
  scanf("%d",&num[i]);
 max = num[0];
 for(i=1;i<=4;i++);
 {
  if(max < num[i])
   {
    // max2 = max;
     max = num[i];
   }
 }
 printf("\n Largest number = %d",max);
 getch();
 return 0;
}
