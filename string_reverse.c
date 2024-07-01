#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
    char str[40],temp;
    int i;
    printf("Enter string to print in Reverse order\n\n");
    gets(str);

    //1.using predefined function - strrev()..
//    strrev(str);
//    printf("Your reversed string :\n");
//    puts(str);


    //2.using logics..
//    printf("Your reversed string :\n");
//    for(i=strlen(str)-1;i>=0;i--)
//        printf("%c",str[i]);


    //3.using another logic - With the help of swaping..
    for(i=0;i<(strlen(str)/2);i++){
        temp=str[i];
        str[i]=str[strlen(str)-1-i];
        str[strlen(str)-1-i]=temp;
    }
    printf("Your reversed string is:\n");
    puts(str);

    getch();
}
