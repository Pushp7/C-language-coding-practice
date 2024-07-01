#include<stdlib.h>
main()
{
    int a[10],i,j,max,min,temp;
    min = 10;
    max = min+9;

    srand(time(NULL));
    for(i=0;i<10;i++)
    {
        temp = rand()%10+min;
        for(j=0;j<=i-1;j++)
        {
            if(temp==a[j])
                break;
        }
        if(j==i)
            a[i]=temp;
        else
            i--;
    }
    for(i=0;i<10;i++)
        printf("%d ",a[i]);

    getch();
}
