#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k,n;
    for(i=1;i<=5;i++){
        k=1;
        n=1;
        for(j=1;j<=9;j++){
            if(j>=6-i&&j<=4+i&&k){
                printf("%d ",n);
                k=0;
                n++;
            }
            else{
                printf("  ");
                k=1;
            }
        }
        printf("\n");
    }
    getch();
}
