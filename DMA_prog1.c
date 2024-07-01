//program to calculate the sum of n numbers entered by the user

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int n,*ptr,i,sum =0;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    //Allocating memory using malloc function.
    ptr = (int*)malloc(n * sizeof(int));

    if(ptr==NULL)
    {
        printf("Error! memory is not allocated.");
        exit(0);
    }

    printf("Enter elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",(ptr+i));
        sum = sum + *(ptr+i); }

    printf("Sum is %d",sum);

    free(ptr);
    getch();
}
