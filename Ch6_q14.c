#include<stdio.h>
#include<conio.h>
main()
{
    int i,j,k,n=1;
    for(i=1;i<=4;i++){
            k=1;
        for(j=1;j<=7;j++){
            if(j>=5-i&&j<=3+i&&k){
                printf("%d",n);
                k=0;
                n++;
            }
            else{
                printf(" ");
                k=1;
            }
        }
        printf("\n");
    }
    getch();
}
