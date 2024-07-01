#include<stdio.h>
#include<conio.h>
int main()
{
  int i,j;
    for(i=1;i<=300;i++)
    {
        if(i==1)
          continue;
        for(j=2;j<=i-1;j++)
        {
            if(i%j==0)
              break;
        }
        if(j==i)
          printf("%d  ",i);
    }
    getch();
    return 0;
}
