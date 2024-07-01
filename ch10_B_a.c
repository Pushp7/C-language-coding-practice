#include<stdio.h>
#include<conio.h>
int digitSum(int);
int main()
{
    int num,sum;
    printf("Enter a number to sum their digits(using recursion)\n");
    scanf("%d",&num);
    sum = digitSum(num);
    printf("\nSum = %d",sum);
    getch();
    return 0;
}
int digitSum(int n)
{
    int r,s;
    if(n>0)
    {
        r=n%10;
        s=r+digitSum(n/10);
        return s;
        /*or simply,
        return(n%10 + digitSum(n/10));
        */
    }
    else
        return 0;
}
