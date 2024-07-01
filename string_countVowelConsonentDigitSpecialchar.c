#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[50],vowels[]="aeiouAEIOU";
    int i,j,vCount=0,dCount=0,scCount=0;
    printf("Enter any string\n");
    gets(str);
    for(i=0;str[i];i++)
    {
        if(str[i]>=65&&str[i]<=90 || str[i]>=97&&str[i]<=122)
        {
            for(j=0;vowels[j];j++)
            if(str[i]==vowels[j])
                vCount++;
        }
        else if(str[i]>=48&&str[i]<=57)
        {
            dCount++;
        }
        else
        {
            scCount++;
        }
    }
    printf("\nVowel count = %d",vCount);
    printf("\nConsonant count = %d",strlen(str)-vCount-dCount-scCount);
    printf("\nDigit count = %d",dCount);
    printf("\nSpecial Character count = %d",scCount);

    getch();
    return 0;
}
