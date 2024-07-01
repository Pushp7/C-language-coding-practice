#include<stdio.h>
#include<conio.h>
int main()
{
    int natSum(int);
    int terms;
    printf("Enter nth term to know the sum of natural number ");
    scanf("%d",terms);
    printf("Sum of first %d natural number is %d",terms,natSum(terms));
    getch();
    return 0;
}
int natSum(int t)
{
    int s;
    if(t>1)
        return(t+natSum(t-1));
    else
        return 1;
}
