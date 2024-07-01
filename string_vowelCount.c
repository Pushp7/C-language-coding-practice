#include<stdio.h>
#include<conio.h>
main()
{
    char str[50],vowel[]="aeiouAEIOU";
    int i,j,vCount=0;
    printf("Enter any string to count Vowels in it\n");
    gets(str);
    for(i=0;str[i];i++)
        for(j=0;vowel[j];j++)
            if(str[i]==vowel[j])
            {
                vCount++;
                break;
            }
    printf("\nVowel count in this string is  %d",vCount);
    if(vCount==0)
        printf("\ni.e, No vowels are there!");
    getch();
}
