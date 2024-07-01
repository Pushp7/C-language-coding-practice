#include<stdio.h>
#include<conio.h>
void pfactor(int);
int main()
{
    int n;
    printf("enter a number to see its all prime factors\n");
    scanf("%d",&n);
    pfactor(n);
    getch();
    return 0;
}
void pfactor(int n)
{
    int i;
    for(i=2;n>1;i++)
    {
        if(n%i==0)
        {
            printf("%d ",i);
            pfactor(n/i);
        }
    }
}
