#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
    char str1[20],str2[10];
    int i,j=0;
    printf("Enter string 1:\n");
    gets(str1);
    printf("Enter string 2:\n");
    gets(str2);
    i=strlen(str1);
    str1[i]=' ';
    i++;
    for(j=0;str2[j];j++,i++)
    {
        str1[i]=str2[j];
    }
    str1[i]='\0';
    printf("Concatenated strings would look like:\n");
    puts(str1);
    getch();
}
