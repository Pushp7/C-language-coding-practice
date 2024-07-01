//Program that allows to input integers only...

#include<stdio.h>
#include<conio.h>
int getIntegerOnly();
main()
{
    int x=0;
    printf("Enter numbers\n");
    x=getIntegerOnly();
    if(x)
    {
        printf("\nYou have entered %d",x);
        getch();
    }
}

int getIntegerOnly()
{
    int num=0,ch;
    do
    {
        ch=getch();
        if(ch>=48&&ch<=57)
        {
            printf("%c",ch);
            num=num*10+(ch-48);
        }
        if(ch==13)     //13 is the ASCII value of Enter Key (also called delimiter).
            break;
    }while(1);
    return num;
}
