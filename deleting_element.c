#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,var[20],var2[20],del,pos;
    char ans;
    printf("Enter the number of elements in array\n");
    scanf("%d",&n);
    printf("Enter those elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&var[i]);
    printf("So is the array : ");
    for(i=0;i<n;i++)
        printf("%d ",var[i]);
    while(n-1)
    {
        printf("\nDo you want to delete any number from array?(Y/N)\n");
        scanf(" %c",&ans);
        if(ans=='y' || ans=='Y')
        {
            printf("Enter the position of that number in array.\n");
            scanf("%d",&pos);
            pos=pos-1;
            n=n-1;
            for(i=0;i<n;i++)
            {
                if(i<pos)
                    var2[i]=var[i];
                if(i>=pos)
                    var2[i]=var[i+1];
            }
            printf("And so is the new Array : ");
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
