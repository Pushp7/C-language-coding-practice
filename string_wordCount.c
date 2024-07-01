#include<stdio.h>
#include<conio.h>
main()
{
    char str[100];
    int i,sCount=0;   //space counter
    printf("Enter any sentence\n");
    gets(str);
    for(i=0;str[i];i++){
        if(str[i]==' ')
            sCount++;
    }
    printf("Total words count in this string = %d",sCount+1);
    getch();
}
