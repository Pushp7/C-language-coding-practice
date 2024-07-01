#include<stdio.h>
#include<conio.h>
int main()
{
 int input,i,insert,position,a[20],a1[20];
 printf("Enter total input count : ");
 scanf("%d",&input);
 printf("\nEnter numbers in array list:\n");
 for(i=0;i<input;i++)
    scanf("%d",&a[i]);
 printf("Original Array :  ");
 for(i=0;i<input;i++)
    printf("%d ",a[i]);
 printf("\nEnter the number you want to insert:\n");
 scanf("%d",&insert);
 printf("Enter the position at you want to insert:\n");
 scanf("%d",&position);
 position = position-1;
 for(i=0;i<input+1;i++)
  {
    if(i<position)
        a1[i]=a[i];
    if(i>position)
        a1[i]=a[i-1];
    if(i==position)
        a1[i]=insert;
 }
 printf("\nAfter inserting :  ");
 for(i=0;i<=input;i++)
    printf("%d ",a1[i]);
 getch();
 return 0;
}
