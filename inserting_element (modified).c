#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,var[20],var2[20],insert,loc;
    char ans;
    printf("Enter the number of elements in array\n");
    scanf("%d",&n);
    printf("Enter those elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&var[i]);
    printf("So is the array :");
    for(i=0;i<n;i++)
        printf("%d ",var[i]);
    while(1)
    {
        printf("\nDo you want to insert any number?(Y/N)\n");
        scanf(" %c",&ans);
        //ans=getche();
        if(ans=='y' || ans=='Y')
        {
            printf("\nEnter the number\n");
            scanf("%d",&insert);
            printf("Enter the location where you want to insert\n");
            scanf("%d",&loc);
            loc=loc-1;
            n=n+1;
            for(i=0;i<n;i++)
            {
                if(i<loc)
                    var2[i]=var[i];
                if(i>loc)
                    var2[i]=var[i-1];
                if(i==loc)
                    var2[i]=insert;
            }
            printf("And so is the new Array :");
            for(i=0;i<n;i++)
            {
                var[i]=var2[i];
                printf("%d ",var[i]);
            }
        }
        else
            break;
    }
    getch();
    return 0;
}
