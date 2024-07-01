#include<stdio.h>
#include<conio.h>
int fib(int);
int main()
{
    int i,terms;
    printf("Enter how many terms of fibonacci series you want to see ");
    scanf("%d",terms);
    for(i=1;i<=terms;i++)
    printf("%d ", fib(terms));
    getch();
    return 0;
}

int fib(int t)
{
    if(t==1||t==2)
        return (1);
    return(fib(t-1)+fib(t-2));
}
