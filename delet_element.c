#include<stdio.h>
#include<conio.h>
void main()
{
 int arr[10]={6,15,9,7,11,2,21,8,3,10},temp[9];
 int n,i,position;
 printf("Original Array : ");
 for(i=0;i<=9;i++)
     printf("%d ",arr[i]);
 printf("\n\nEnter a number to delete from the given number\n");
 scanf("%d",&n);
 for(i=0;i<=9;i++);
 {
  if(n==arr[i])
     position = i;
 }
 for(i=0;i<position;i++)
 {
     temp[i]=arr[i];
 }
 for(i=position+1;i<9;i++)
 {
     temp[i]=arr[i+1];
 }
 printf("\nNew Array      : ");
 for(i=0;i<=8;i++)
   printf("%d ",temp[i]);
 getch();
 return 0;
}
